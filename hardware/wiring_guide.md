# Hardware Setup & Wiring Guide

This guide outlines the hardware requirements and electrical connections for setting up a standard automated micro-farm node using an ESP32.

---

## 📋 Bill of Materials (BOM)

| Component | Description | Quantity |
| :--- | :--- | :--- |
| **ESP32 Development Board** | Main microcontroller node | 1 |
| **Capacitive Soil Moisture Sensor** | v1.2 or v2.0 (Corrosion-resistant) | 1 |
| **5V Relay Module** | Controls high-voltage/isolated pump power | 1 |
| **5V/12V DC Water Pump** | Submersible small-scale pump | 1 |
| **Power Supply** | Compatible with chosen pump and ESP32 | 1 |
| **Jumper Wires & Tubing** | Standard connection accessories | As needed |

---

## 🔌 Wiring Schematic

Connect the components according to the pin configuration below. Ensure your ESP32 board pins match the specific GPIO layout.

### 1. Capacitive Soil Moisture Sensor
*   **VCC** ➡️ ESP32 **3V3** (or 5V depending on sensor version)
*   **GND** ➡️ ESP32 **GND**
*   **AOUT (Analog Out)** ➡️ ESP32 **GPIO 34**

### 2. 5V Relay Module
*   **VCC** ➡️ ESP32 **5V / VIN**
*   **GND** ➡️ ESP32 **GND**
*   **IN (Signal)** ➡️ ESP32 **GPIO 25**

### 3. DC Water Pump Circuit
*   Pump **Negative (-)** ➡️ Power Supply **Negative (-)**
*   Pump **Positive (+)** ➡️ Relay **COM (Common)**
*   Power Supply **Positive (+)** ➡️ Relay **NO (Normally Open)**

---

## 🛠️ Contribution Goals
*   [ ] Create a 3D-printable modular enclosure for the ESP32 and relay.
*   [ ] Convert this text guide into a clean, visual Fritzing or KiCAD schematic diagram.
