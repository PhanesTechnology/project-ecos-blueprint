# »Warum sollte ich dir was wegnehmen, wenn wir alles teilen können?«
<sub>*“Why should I take something away from you, when we can share everything?”*</sub>

> <sub>Intro quote from the song [**“Hurra die Welt geht unter”** by K.I.Z feat. Henning May](https://www.youtube.com/watch?v=XTPGyGN4McE).</sub>

---

# project-ecos-blueprint

> Decentralizing human survival through open hardware and local automation.

A modular, open-source blueprint to help individuals and local communities transition from fragile, centralized dependencies to resilient, self-reliant ecosystems. 

This repository contains the physical designs, automation code, and practical guides needed to build local loops for food, water, energy, and materials.

---

## 🛠️ The Stack

### 1. Hardware (Physical Layer)
*   **Automated Micro-Farms:** Modular indoor/outdoor growing systems (hydroponics/aquaponics) designed for high-density, low-footprint food production.
*   **Active Microcontroller & Sensor Rig:**
    *   **ESP32-S3-DevKitC-1** (16MB Flash / 8MB PSRAM) — Local node controller.
    *   **Capacitive Soil Moisture Sensor v2.0** — Corrosion-resistant soil monitoring.
    *   **DHT22 (AM2302)** — Ambient temperature and humidity logging.
    *   **5V Relay Module (Optocoupler)** — High-voltage power switching for irrigation.
    *   **3V–5V Submersible Mini Water Pump** — Micro-irrigation loop driver.
*   **Resource Recovery:** Blueprints for turning local scrap and waste into functional materials (e.g., DIY filament makers, rainwater filtration).

### 2. Firmware & Software (Digital Layer)
*   **Local OS:** Microcontroller code (ESP32/Pi) to automate monitoring (soil moisture, water, ambient climate) locally without relying on external cloud APIs.
*   **Automated Watering Loops:** Logic to trigger local relay-driven pumps based on capacitive soil moisture thresholds and outdoor climate trends.
*   **Community Mesh Apps:** Simple, offline-first templates for local tool-sharing, seed swapping, and skill trading.

### 3. Knowledge Base (Living Documentation)
*   Step-by-step guides on regenerative micro-agriculture, soil biological revival, and living mulch applications.
*   Locally sourcing materials to build essential tools from scrap.

---

## 🤝 How to Contribute

We are looking for engineers, designers, growers, and makers. Grab an open issue or help us build out the structure:
*   [ ] **Hardware:** Optimize the 3D-printable bracket for minimal filament usage.
*   [ ] **Firmware:** Port the ESP32-S3 sensor logic to MicroPython and calibrate moist/dry threshold values.
*   [ ] **Docs:** Translate the vertical farming assembly guide and regenerative soil top-dressing protocols.
