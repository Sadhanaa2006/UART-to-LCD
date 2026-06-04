#include <reg51.h>

// LCD control pins
sbit RS = P1^0;
sbit EN = P1^1;

// Function prototypes
void lcd_init();
void lcd_cmd(unsigned char);
void lcd_data(unsigned char);
void lcd_print(char *);
void uart_init();
unsigned char uart_receive();
void delay(unsigned int);

// ---------------- DELAY ----------------
void delay(unsigned int t)
{
    unsigned int i, j;
    for(i = 0; i < t; i++)
        for(j = 0; j < 1275; j++);
}

// ---------------- LCD SEND 4 BIT ----------------
void lcd_send_nibble(unsigned char val)
{
    P2 = (P2 & 0x0F) | (val & 0xF0);  // send upper nibble
    EN = 1;
    delay(2);
    EN = 0;
}

// ---------------- LCD COMMAND ----------------
void lcd_cmd(unsigned char cmd)
{
    RS = 0;

    lcd_send_nibble(cmd);
    lcd_send_nibble(cmd << 4);
}

// ---------------- LCD DATA ----------------
void lcd_data(unsigned char dat)
{
    RS = 1;

    lcd_send_nibble(dat);
    lcd_send_nibble(dat << 4);
}

// ---------------- LCD INIT ----------------
void lcd_init()
{
    delay(20);

    lcd_cmd(0x02); // 4-bit mode
    lcd_cmd(0x28); // 2 line, 5x7 matrix
    lcd_cmd(0x0C); // display ON cursor OFF
    lcd_cmd(0x06); // auto increment
    lcd_cmd(0x01); // clear display
}

// ---------------- UART INIT ----------------
void uart_init()
{
    TMOD = 0x20;   // Timer1 mode2
    TH1 = 0xFD;    // 9600 baud for 11.0592 MHz
    SCON = 0x50;   // 8-bit UART
    TR1 = 1;       // start timer
}

// ---------------- UART RECEIVE ----------------
unsigned char uart_receive()
{
    while(RI == 0);
    RI = 0;
    return SBUF;
}

// ---------------- MAIN ----------------
void main()
{
    unsigned char ch;

    lcd_init();
    uart_init();

    lcd_cmd(0x80); 

    while(1)
    {
        ch = uart_receive();  // get char from Virtual Terminal
        lcd_data(ch);         // display 
    }
}