# Laser Security Alarm System

An automated, high-precision perimeter security and intrusion detection system developed using an Arduino microcontroller, Light Dependent Resistor (LDR) sensor, and a focused laser beam[cite: 1]. The system creates an invisible light barrier that instantly triggers an audible buzzer alarm and visual LED indicators if the perimeter is broken by an intruder[cite: 1].

---

## 👥 Project Team & Governance
*   **Developers:** Pooja Saraswat, Srushti Amar Patil, Namrata Wandre, Sanika Tribhuvane[cite: 1]
*   **Academic Year:** 2024-25 (Semester IV Undergrad Project)[cite: 1]
*   **Department:** Electronics and Computer Engineering[cite: 1]
*   **Institute:** Sharad Institute of Technology College of Engineering, Yadrav (Autonomous)[cite: 1]
*   **Project Guide:** Dr. P. S. Patil[cite: 1]

---

## 📌 Project Architecture & Methodology
The system creates a continuous light monitoring loop between a localized laser source and a light sensor interface[cite: 1]:

1.  **Laser Barrier:** A focused laser module emits a narrow, collimated light beam across a protected entrance or room perimeter directly onto an LDR sensor[cite: 1].
2.  **Sensor Feedback:** When the laser beam is uninterrupted, the LDR maintains low internal resistance[cite: 1]. 
3.  **Intrusion Detection:** If an object or person steps through the path, the light beam is blocked[cite: 1]. The LDR's internal resistance surges instantly, creating a voltage drop that is read by the Arduino controller[cite: 1].
4.  **Alarm Trigger:** Upon reading the threshold drop, the hardware controller executes an alert state, turning on the high-decibel buzzer and warning LEDs[cite: 1].

---

## 🛠️ Bill of Materials (BOM)
| Component | Function / Placement |
| :--- | :--- |
| **Arduino Uno** | Master microcontroller to read sensor inputs and process logic control[cite: 1]. |
| **Laser Emitter Module** | Provides a continuous, focused light beam across long distances without scattering[cite: 1]. |
| **Light Dependent Resistor (LDR)** | Photo-resistor sensor interface acting as the dark-activated trigger point[cite: 1]. |
| **5V Buzzer** | Audio signaling device providing loud acoustic alerts during a security breach[cite: 1]. |
| **LED Indicators (x4)** | Status lights used for Active Mode, Breach Alerts, Laser Alignment, and Reset[cite: 1]. |
| **Push Button Switch** | External hardware interrupt acting as a manual security system reset[cite: 1]. |
| **10kΩ Resistor** | Configured as part of a fixed voltage divider network with the LDR sensor[cite: 1]. |
| **Solderless Breadboard & Wires** | Prototyping platform used to interface the physical components securely[cite: 1]. |

---

## 🎛️ Circuit Implementation Details
*   **LDR Voltage Divider:** The LDR is wired in series with a 10kΩ resistor across `5V` and `GND` to feed an analog signal voltage to the Arduino system[cite: 1].
*   **Audio Siren:** A 5V electronic buzzer is mapped directly to a digital output pin to generate instant alerting sound effects[cite: 1].
*   **Visual Notification Matrix:** System active and alert confirmation LEDs are connected through independent current-limiting resistors to protect hardware pins[cite: 1].
*   **Manual Reset Logic:** A standalone push button is integrated to pull a digital pin low, providing an external operator control point to clear active alarms[cite: 1].

---

## ⚡ Key Advantages & Practical Applications
### Advantages
*   **Simple & Cost-Effective:** Highly reliable perimeter defense architecture built with minimal, affordable hardware modules[cite: 1].
*   **High Sensitivity & Range:** Due to low light scattering, the laser system maintains a precise tracking path over long distances[cite: 1].
*   **Auxiliary Power Ready:** Can easily run off a standalone 9V battery or power bank, ensuring complete protection during a grid power failure[cite: 1].

### Real-world Applications
*   **Asset Protection:** Creates an invisible protective perimeter surrounding high-value installations or museum exhibits[cite: 1].
*   **Commercial Lockers:** Acts as a secondary layer of physical defense for home security safes and financial vaults[cite: 1].
*   **Boundary Monitoring:** Keeps track of restricted areas to verify if pets or toddlers cross safe residential zones[cite: 1].

---

## 🚀 How to Run the Project
1. Clone this repository to your machine.
2. Open the file inside the `/Code/main.ino` folder using your Arduino IDE.
3. Hook up your hardware according to the circuit layout guidelines.
4. Upload the code to your Arduino Uno board.
5. Open your Serial Monitor (`9600 baud`) to review real-time LDR ambient values and calibrate your threshold[cite: 1].
