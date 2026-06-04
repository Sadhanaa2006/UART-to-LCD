📟**UART Communication with 4-Bit LCD Display (8051)**

🔹**Overview**

This project demonstrates UART-based serial communication using the AT89C51 microcontroller, where data received from a PC is displayed in real time on a 16x2 LCD operating in 4-bit mode. It highlights embedded communication, efficient LCD interfacing, and real-time data handling.

🎯 **Objective**

To receive serial data via UART and display it on an LCD using minimal GPIO pins through 4-bit interfacing.

⚙️ **Tech Stack**

-> Microcontroller: AT89C51 (8051 family) <br> -> IDE: Keil µVision <br> -> Simulator: Proteus Design Suite <br> -> Communication: UART (9600 baud rate) <br> -> Display: 16x2 LCD (4-bit mode)

🔌**Pin Configuration**

**UART Interface** <br>

P3.0 (RXD) ← TXD of Virtual Terminal / COMPIM <br>
P3.1 (TXD) → RXD of Virtual Terminal / COMPIM <br>

**LCD Interface (4-bit mode)** <br>

RS → P1.0 <br>
EN → P1.1 <br>
D4–D7 → P2.4 – P2.7 <br>
VSS → GND <br>
VDD → +5V <br>
VEE → Contrast control (potentiometer) <br>

🧠**Working Principle**

-> Serial data transmitted from PC via Virtual Terminal / COMPIM <br>
-> AT89C51 receives data using UART (SBUF register) <br>
-> Each character is processed and sent to LCD <br>
-> LCD displays characters in real time using 4-bit mode <br>

🛠️ **Simulation Flow** <br>

-> Code compiled in Keil µVision to generate .hex <br>
-> .hex loaded into AT89C51 in Proteus <br>
-> UART terminal connected for input <br>
-> Simulation run to observe LCD output <br>

📊 **Result**

-> UART communication successfully established <br>
-> Real-time LCD display of received characters <br>
-> Efficient 4-bit LCD interfacing using minimal I/O pins <br>

🚀 **Skills Demonstrated**

-> Embedded C programming (8051 architecture) <br>
-> UART serial communication <br>
-> LCD interfacing (4-bit mode) <br>
-> Digital system simulation <br>




