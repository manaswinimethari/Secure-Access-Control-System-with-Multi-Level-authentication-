# Secure-Access-Control-System-with-Multi-Level-authentication-
<p align="center">

![Embedded System](https://img.shields.io/badge/EMBEDDED%20SYSTEM-555555?style=for-the-badge&logoColor=white)
![LPC2148](https://img.shields.io/badge/LPC2148-2196F3?style=for-the-badge)

![Language](https://img.shields.io/badge/LANGUAGE-555555?style=for-the-badge)
![Embedded C](https://img.shields.io/badge/EMBEDDED%20C-4CAF50?style=for-the-badge)

![RTC](https://img.shields.io/badge/RTC-555555?style=for-the-badge)
![Real Time Clock](https://img.shields.io/badge/REAL%20TIME%20CLOCK-FF9800?style=for-the-badge)

![Interface](https://img.shields.io/badge/INTERFACE-555555?style=for-the-badge)
![4x4 Keypad](https://img.shields.io/badge/4x4%20KEYPAD-E53935?style=for-the-badge)

![Interrupts](https://img.shields.io/badge/INTERRUPTS-555555?style=for-the-badge)
![EINT0 | EINT1](https://img.shields.io/badge/EINT0%20%7C%20EINT1-9C27B0?style=for-the-badge)

![Status](https://img.shields.io/badge/STATUS-555555?style=for-the-badge)
![Completed](https://img.shields.io/badge/COMPLETED-4CAF50?style=for-the-badge)

</p>

## 🛠️ Technologies Used

<p align="center">

<img src="https://img.shields.io/badge/ARM7-LPC2148-007ACC?style=for-the-badge&logo=arm&logoColor=white"/>
<img src="https://img.shields.io/badge/Language-Embedded%20C-239120?style=for-the-badge&logo=c&logoColor=white"/>
<img src="https://img.shields.io/badge/Fingerprint-R305-8E44AD?style=for-the-badge"/>
<img src="https://img.shields.io/badge/Interface-4x4%20Keypad-E74C3C?style=for-the-badge"/>
<img src="https://img.shields.io/badge/Display-16x2%20LCD-16A085?style=for-the-badge"/>
<img src="https://img.shields.io/badge/Communication-UART-3498DB?style=for-the-badge"/>
<img src="https://img.shields.io/badge/Memory-EEPROM-795548?style=for-the-badge"/>
<img src="https://img.shields.io/badge/Interrupts-EINT0%20%7C%20EINT1-9B59B6?style=for-the-badge"/>
<img src="https://img.shields.io/badge/Motor-L293D-F39C12?style=for-the-badge"/>
<img src="https://img.shields.io/badge/Status-Completed-2ECC71?style=for-the-badge"/>

</p>

Security Access Control System with Multi-Level Authentication is a secure solution that verifies users through multiple authentication methods, such as passwords, RFID, OTP, and biometrics. It enhances security, prevents unauthorized access, supports role-based permissions, and maintains access logs for efficient monitoring and management.

# 📖 overview 

The Secure Access Control System with Multi-Level Authentication is an embedded security solution developed using the LPC2148 ARM7 Microcontroller. The system provides enhanced protection by verifying users through three authentication levels: User ID, Password, and Fingerprint. Only when all verification stages are successful is access granted. This approach significantly improves security, reliability, and user authentication accuracy compared to conventional single-level access systems.

# ✨ Features

- 🔢 4-Digit User ID Authentication
- 🔑 Password Authentication using EEPROM
- 👆 Fingerprint Verification (R305)
- 🔒 Three-Level Authentication
- 📺 LCD User Interface
- ⌨️ 4×4 Matrix Keypad Input
- 💾 EEPROM Data Storage
- ⚡ UART Communication
- 🔄 Fingerprint Enroll & Delete
- 🚪 Automatic Door Control using DC Motor

# 🎯 objectives 

🎯 Objectives

- 🔐 Enhance security through three-level authentication (User ID, Password, and Fingerprint). 

- 🚪 Prevent unauthorized access by allowing only verified users.

- 💾 Securely store and manage user credentials using EEPROM.

- 👆 Improve authentication accuracy with fingerprint verification.

- ⚡ Provide fast, reliable, and efficient access control.

- 📱 Display clear user instructions and system status on the LCD.

- 🔄 Support fingerprint enrollment and deletion for user management. 

- 🛡️ Increase the overall reliability of embedded security systems.

- ⚙️ Demonstrate practical implementation of embedded systems using LPC2148.

- 🌍 Develop a cost-effective solution suitable for homes, offices, and restricted areas.

# 🛠️ Technologies Used

| 🏷️ Category | 🚀 Technology |
|:-----------:|---------------|
| 💻 Programming Language | Embedded C |
| 🖥️ Microcontroller | LPC2148 (ARM7TDMI-S) |
| 👆 Fingerprint Sensor | R305 |
| ⌨️ Input Device | 4×4 Matrix Keypad |
| 📺 Display | 16×2 LCD |
| 💾 Memory | EEPROM (AT24C256) |
| ⚙️ Motor Driver | L293D |
| 🚪 Actuator | DC Motor |
| 🔄 Communication Protocols | UART, I²C |
| 🛠️ IDE | Keil uVision |
| ⚡ Compiler | Keil C Compiler |
| 🔥 Flashing Software | Flash Magic |
| 🧪 Debugging Tool | Serial Terminal / Hercules |
| 💻 Operating System | Windows 10/11 |
| 📂 Version Control | Git & GitHub |

# 📂 Project Structure

![image alt](https://github.com/manaswinimethari/Secure-Access-Control-System-with-Multi-Level-authentication-/blob/54608f2c694b6b78125f9330cd600e5d03665552/Gallery/IMG-20260721-WA0002.jpg)

# 🔒 Authentication Levels

### 🆔 Level 1 – User ID Verification
- Enter a **4-digit User ID** using the 4×4 Matrix Keypad.
- LPC2148 verifies the ID stored in EEPROM.
- ✅ Valid ID → Proceed to Password
- ❌ Invalid ID → Access Denied

### 🔑 Level 2 – Password Verification
- Enter a **4-digit Password**.
- Password is verified with EEPROM.
- ✅ Correct Password → Proceed to Fingerprint
- ❌ Incorrect Password → Access Denied

### 👆 Level 3 – Fingerprint Verification
- Place your finger on the **R305 Fingerprint Sensor**.
- The fingerprint is matched with the enrolled template.
- ✅ Match → Door Unlocks
- ❌ No Match → Access Denied

![image alt](https://github.com/manaswinimethari/Secure-Access-Control-System-with-Multi-Level-authentication-/blob/50b38fee0b74d49cb2ac13125dac77ed84984e1c/Gallery/file_0000000023d48230b930fbf5887b8d9a.png)  

> **🔐 Access is granted only after successfully passing all three authentication levels.**

## 📊 Workflow

![image alt](https://github.com/manaswinimethari/Secure-Access-Control-System-with-Multi-Level-authentication-/blob/87ca8a378f6ea441f29c9907e4b9049345025251/Gallery/file_0000000016d88208ba562234b9fbb825.png)

## 💡 Future Enhancements
- 📱 Mobile App Integration
- 🌐 IoT-Based Remote Monitoring
- ☁️ Cloud Database Support
- 📷 Face Recognition Authentication
- 📩 SMS/Email Alerts
- 🔐 OTP-Based Authentication

