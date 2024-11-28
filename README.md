# Smart Toll System Using RFID and Arduino  

This project implements an automated toll collection system using RFID technology and Arduino. It ensures secure and efficient vehicle access at toll booths by validating RFID tags, allowing authorized vehicles, denying unauthorized ones, and alerting if a stolen car is detected.  

---

## Table of Contents  
- [Introduction](#introduction)  
- [Features](#features)  
- [Components](#components)  
- [Circuit Diagram](#circuit-diagram)  
- [Working Principle](#working-principle)  
- [Installation](#installation)  
- [Usage](#usage)  
- [Future Improvements](#future-improvements)  
- [License](#license)  

---

## Introduction  
This Smart Toll System eliminates the need for manual toll collection by automating the process with RFID and Arduino. Vehicles are equipped with RFID tags containing unique IDs, which are scanned and validated by the system. If a vehicle is authorized, the system allows it to pass; otherwise, access is denied. If a stolen car is identified, the system triggers an alert for authorities.  

---
![WhatsApp Image 2024-11-29 at 01 17 12_709d2081](https://github.com/user-attachments/assets/26de0c23-4d08-400c-abd1-6f1bd251c847)

## Features  
- **Automated Toll Collection:** Scans and validates RFID tags for quick toll processing.  
- **Security Alerts:** Detects and triggers an alert for stolen vehicles.  
- **Access Control:** Denies access to unauthorized vehicles.  
- **Efficient Traffic Flow:** Reduces waiting time and human intervention.  

---

## Components  
- Arduino Uno/Nano  
- RFID Reader RC522 
- RFID Tags  
- Buzzer
- IR sensor
- Push Button
- LEDs (Red and Green for status)  
- Breadboard and connecting wires  
- Power supply  

---

## Circuit Diagram  
Add your circuit diagram here (or provide a link to it). Use a tool like [Fritzing](https://fritzing.org/) to create a professional circuit diagram.  

---

## Working Principle  
1. **RFID Scanning:** The RFID reader scans the tag attached to the vehicle.  
2. **Validation:** The system compares the scanned ID with a preloaded database.  
   - **Authorized Vehicle:** Opens the toll gate and allows access.  
   - **Unauthorized Vehicle:** Denies access with a red LED and buzzer alert.  
3. **Stolen Vehicle Detection:** If the RFID tag matches an ID in the stolen vehicles list, the system triggers an alert using the buzzer.  
4. **Output:** Displays vehicle status on an LCD or serial monitor.  

---

## Installation  
1. **Hardware Setup:**  
   - Connect the RFID reader, LEDs, buzzer, and optional LCD to the Arduino as per the circuit diagram.  
   - Power the setup using a USB cable or external power supply.  

2. **Software Setup:**  
   - Install the Arduino IDE from [Arduino.cc](https://www.arduino.cc/).  
   - Add the RFID library to your IDE. You can install the `MFRC522` library via the Library Manager.  
   - Clone this repository:  
     ```bash  
     git clone https://github.com/yourusername/smart-toll-system.git  
     ```  
   - Open the `smart_toll_system.ino` file in the Arduino IDE.  

3. **Upload Code:**  
   - Connect your Arduino to your PC and upload the code.  

4. **Database Setup:**  
   - Edit the RFID database in the Arduino code to include authorized and stolen vehicle IDs.  

---

## Usage  
1. Place the RFID tag near the reader.  
2. Observe the status:  
   - **Green LED:** Access granted.  
   - **Red LED + Buzzer:** Access denied or stolen vehicle detected.  
3. The system resets automatically for the next vehicle.  

---
## Output
1. NO Vehicle
   ![WhatsApp Image 2024-11-29 at 01 17 12_a8bd8519](https://github.com/user-attachments/assets/98f3d348-200a-42fb-9867-7b01111e40d3)

2. Valid Vehicle
   ![WhatsApp Image 2024-11-29 at 01 17 32_0fe3d038](https://github.com/user-attachments/assets/d024b58a-2eaa-46b0-a783-8ca2e3391a14)

3. InValid Vehicle
   ![WhatsApp Image 2024-11-29 at 01 17 32_002735c0](https://github.com/user-attachments/assets/e27fce31-d398-4909-ab55-1a8af4edb668)

---
## Future Improvements  
- Integrate a toll payment system via online wallets.  
- Add a GSM module to notify authorities of stolen vehicle detections.  
- Use a cloud-based database for real-time updates.  
- Include an IoT dashboard to monitor toll activity.  

---

## License  
This project is licensed under the MIT License. You are free to use, modify, and distribute it. See the [LICENSE](LICENSE) file for details.  

---

## Acknowledgments  
- **Libraries Used:** [MFRC522](https://github.com/miguelbalboa/rfid)  
- **Tools:** Arduino IDE, Fritzing  
- **Inspiration:** Automated toll systems in real-world applications.  

---


