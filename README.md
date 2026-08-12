## 🛡️Secure Access Control System with Multi Level authentication

![Embedded System](https://img.shields.io/badge/EMBEDDED%20SYSTEM-LPC2148-1E88E5?style=for-the-badge)

![Language](https://img.shields.io/badge/LANGUAGE-EMBEDDED%20C-43A047?style=for-the-badge)

![Authentication](https://img.shields.io/badge/AUTHENTICATION-USER%20ID%20%7C%20PASSWORD%20%7C%20FINGERPRINT-E53935?style=for-the-badge)

![Fingerprint Module](https://img.shields.io/badge/FINGERPRINT%20MODULE-R305-F57C00?style=for-the-badge)

![Storage](https://img.shields.io/badge/STORAGE-AT25C256%20EEPROM-FBC02D?style=for-the-badge)

![Interface](https://img.shields.io/badge/INTERFACE-4X4%20KEYPAD-D81B60?style=for-the-badge)

![Display](https://img.shields.io/badge/DISPLAY-16X2%20LCD-5E35B1?style=for-the-badge)

![Motor Driver](https://img.shields.io/badge/MOTOR%20DRIVER-L293D-00897B?style=for-the-badge)

![RTC](https://img.shields.io/badge/RTC-REAL%20TIME%20CLOCK-B8860B?style=for-the-badge)

![Status](https://img.shields.io/badge/STATUS-COMPLETED-4CAF50?style=for-the-badge)

The Secure Access Control System with Multi-Level Authentication is an embedded security solution designed to provide enhanced protection against unauthorized access. The system uses three levels of authentication: User ID verification, password authentication, and fingerprint verification. It is built around the LPC2148 microcontroller, which manages user credentials, biometric authentication, and door control operations.

## 📖 overview 

The Secure Access Control System with Multi-Level Authentication is an embedded security solution developed using the LPC2148 ARM7 Microcontroller. The system provides enhanced protection by verifying users through three authentication levels: User ID, Password, and Fingerprint. Only when all verification stages are successful is access granted. This approach significantly improves security, reliability, and user authentication accuracy compared to conventional single-level access systems.

## ✨ Features

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

## 🎯 Objectives

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

## 🛠️ Technologies Used

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

## 🔒 Authentication Levels

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
  
![image alt](https://github.com/manaswinimethari/Secure-Access-Control-System-with-Multi-Level-authentication-/blob/cd9a36a811dd32dfb5ec83b8040493b5b8635bd0/Gallery/IMG-20260812-WA0000(2).jpg)  

> **🔐 Access is granted only after successfully passing all three authentication levels.**
 
## 📊 Block Diagram

![image alt](https://github.com/manaswinimethari/Secure-Access-Control-System-with-Multi-Level-authentication-/blob/6d1459a41b075224ac7a535f68f1845a86b7cf35/Gallery/IMG-20260811-WA0008.jpg)

## 🌐 Workflow

![image alt](https://github.com/manaswinimethari/Secure-Access-Control-System-with-Multi-Level-authentication-/blob/4130d2ee4623469d8050264bcec30d51f59d1971/Gallery/IMG-20260811-WA0006.jpg)

## 💡 Future Enhancements
- 📱 Mobile App Integration
- 🌐 IoT-Based Remote Monitoring
- ☁️ Cloud Database Support
- 📷 Face Recognition Authentication
- 📩 SMS/Email Alerts
- 🔐 OTP-Based Authentication

## 🖥️ System Startup

![image alt](https://github.com/manaswinimethari/Secure-Access-Control-System-with-Multi-Level-authentication-/blob/192665f15c4efaf3c8b88ec1634ffbac7370f509/Gallery/IMG_20260801_073312.png)

## 📋 Main Menu

![image alt](https://github.com/manaswinimethari/Secure-Access-Control-System-with-Multi-Level-authentication-/blob/684e6ef3967fa763d0398eaf3ff3881e70ab62cd/Gallery/IMG-20260731-WA0004.jpg)

 ![image alt](https://github.com/manaswinimethari/Secure-Access-Control-System-with-Multi-Level-authentication-/blob/754857c448b62b633f2b967cb8de11e3f7f40f50/Gallery/IMG-20260731-WA0003.jpg)
 
## 🔐 User Authentication

 ![image alt](https://github.com/manaswinimethari/Secure-Access-Control-System-with-Multi-Level-authentication-/blob/234e0193bbbd11d37d869b0c5809b5d80c57dd77/Gallery/file_00000000113c8211addd96b04e2268f8.png)
 

## 🔓 Access Granted (Door Opened)
 ![image alt](https://github.com/manaswinimethari/Secure-Access-Control-System-with-Multi-Level-authentication-/blob/84e0bf73a530b460965497e541df5a1af6786679/Gallery/IMG-20260731-WA0003.jpg)

## 🔒 Automatic Door Re-Locking

- The system automatically starts a timer after successful authentication and door unlocking.
- A countdown timer is displayed on the LCD screen to indicate the remaining time before the door is locked again.
- The user can clearly monitor the door access duration through the timer display.
- Once the predefined time interval expires, the LPC2148 microcontroller activates the motor driver to close and lock the door automatically.
- The automatic re-locking feature prevents unauthorized access caused by accidentally leaving the door open.
- LCD messages such as "Door Open", "Closing in 5 Seconds", and "Door Locked" provide real-time status updates.
- This feature enhances security by ensuring that the door remains unlocked only for a limited period.
- The timer-based locking mechanism improves reliability and reduces the need for manual door locking.
- 
  ![image alt](https://github.com/manaswinimethari/Secure-Access-Control-System-with-Multi-Level-authentication-/blob/171146e9b331b3431d5eaa79d2fe2b98a9b1b219/Gallery/IMG-20260731-WA0002.jpg)
 
 ![image alt](https://github.com/manaswinimethari/Secure-Access-Control-System-with-Multi-Level-authentication-/blob/d3fda2769c929cd5b67acad7376a63c1465a993b/Gallery/IMG-20260731-WA0007.jpg)



## ⚙️ Complete Hardware Setup

 ![image alt](https://github.com/manaswinimethari/Secure-Access-Control-System-with-Multi-Level-authentication-/blob/ff7a4cfb6122d7707ea39fad9b4fc41b58de579c/Gallery/IMG_20260801_094137.png)

## ⚙️ Working Principle

The user enters a User ID and password through the keypad. The LPC2148 verifies the credentials using data stored in EEPROM. If valid, the system requests fingerprint authentication. The fingerprint module compares the scanned fingerprint with stored templates. Upon successful verification, the LPC2148 activates the motor driver to unlock the door; otherwise, access is denied.

## ✅ Advantages

- 🔐 Enhanced Security: Provides multiple authentication levels for stronger protection.
- 👤 Authorized Access Only: Allows entry only after successful user verification.
- 🔑 Multi-Level Authentication: Uses User ID, Password, and Fingerprint verification.
- 👆 Biometric Security: Fingerprint authentication reduces the risk of credential misuse.
- 🚫 Prevents Unauthorized Access: Invalid credentials immediately deny access.
- 💾 Secure Data Storage: User credentials can be stored in EEPROM for reliable verification.
- 🖥️ User-Friendly Operation: LCD provides clear instructions and authentication status.
- 🚪 Automatic Door Control: Automatically opens the door after successful authentication.
- ⚡ Fast Verification: LPC2148 provides quick processing of authentication steps.
- 💰 Cost-Effective: Provides strong security using affordable embedded hardware.
- 🏢 Wide Applications: Suitable for offices, laboratories, banks, institutions, and restricted areas.
-🔧 Easy to Upgrade: Additional security features can be integrated in the future.

# ⚠️ Limitations

- 👆 Fingerprint Dependency: Fingerprint recognition may fail if the finger is wet, - dirty, or damaged.
- 🔢 Password Risk: Passwords can be forgotten or exposed to others.
- 👤 Limited User Capacity: The number of registered users depends on available memory and fingerprint module capacity.
- ⚡ Power Dependency: The system requires a stable power supply for continuous operation.
- 🚪 Motor Limitations: Door operation depends on the reliability of the motor and motor driver.
- 💾 Limited Storage: EEPROM provides limited memory for storing user information.
- 🔧 Hardware Maintenance: Sensors, keypad, motor, and connections may require periodic maintenance.
- 🌐 No Remote Access: The basic system does not provide internet-based monitoring or remote control.
- 🔔 Limited Alert System: Unauthorized attempts may not be reported remotely without additional communication modules.
- 🔄 Scalability: Additional hardware and software modifications are required for large-scale deployment.

## 📜 License

This project is intended for educational and academic purposes.

Feel free to fork, modify, and improve the project.


## 👨‍💻 Author

Methari Manaswini 

Bachelor of Technology (Electronics and Communication Engineering)

Embedded Systems Engineer

2025 Graduate

# 🙏🏻 Thank you
Thank you for visiting this project.

⭐ If you find this project useful, consider giving the repository a star!
