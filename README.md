# 📟 UART Communication with 4-Bit LCD Display (8051)

## 🔹 Overview

This project demonstrates UART-based serial communication using the AT89C51 microcontroller, where data received from a PC is displayed in real time on a 16x2 LCD operating in 4-bit mode. It highlights embedded communication, efficient LCD interfacing, and real-time data handling.

## 🎯 Objective

To receive serial data via UART and display it on an LCD using minimal GPIO pins through 4-bit interfacing.

## ⚙️ Tech Stack

* Microcontroller: AT89C51 (8051 family)
* IDE: Keil µVision
* Simulator: Proteus Design Suite
* Communication: UART (9600 baud rate)
* Display: 16x2 LCD (4-bit mode)

## 🔌 Pin Configuration

### UART Interface

* P3.0 (RXD) ← TXD of Virtual Terminal / COMPIM
* P3.1 (TXD) → RXD of Virtual Terminal / COMPIM

### LCD Interface (4-bit mode)

* RS → P1.0
* EN → P1.1
* D4–D7 → P2.4 – P2.7
* VSS → GND
* VDD → +5V
* VEE → Contrast control (potentiometer)

## 🧠 Working Principle

* Serial data transmitted from PC via Virtual Terminal / COMPIM
* AT89C51 receives data using UART (SBUF register)
* Each character is processed and sent to LCD
* LCD displays characters in real time using 4-bit mode

## 🛠️ Simulation Flow

* Code compiled in Keil µVision to generate `.hex`
* `.hex` loaded into AT89C51 in Proteus
* UART terminal connected for input
* Simulation run to observe LCD output

## 📊 Result

* UART communication successfully established
* Real-time LCD display of received characters
* Efficient 4-bit LCD interfacing using minimal I/O pins

## 🚀 Skills Demonstrated

* Embedded C programming (8051 architecture)
* UART serial communication
* LCD interfacing (4-bit mode)
* Digital system simulation
* Embedded debugging and peripheral integration

## 💡 Key Highlight

✔ Minimal GPIO usage using 4-bit LCD mode
✔ Real-time serial-to-display conversion
✔ Fully simulation-based embedded system project




