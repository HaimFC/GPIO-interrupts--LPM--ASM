# MSP430 Embedded Systems Project

This repository contains source code and documentation for a series of MSP430 embedded system projects. These projects demonstrate key embedded programming concepts such as GPIO configuration, FSM-based architecture, interrupt handling, and modular design using abstraction layers.

---

## 📋 Project Overview

### Features
- **GPIO Configuration**:
  - LED and push-button interfacing with debouncing and interrupt handling.
- **Finite State Machine (FSM)**:
  - Simple and advanced FSM implementations with interrupt-driven transitions.
- **PWM Control**:
  - Generating precise PWM signals for peripherals.
- **Low Power Modes**:
  - Optimizing power usage by leveraging sleep modes.
- **Modular Design**:
  - Clean separation into BSP, HAL, API, and application layers for portability and scalability.

---

---

## 🔧 How to Run

### Software Requirements
- **IAR Embedded Workbench**:
  - Use the provided `.s43` files for development and debugging.

### Hardware Requirements
- MSP430 Development Board:
  - Push buttons connected to `P2.0` to `P2.3`.
  - LEDs connected to `PORT1` or `PORT9/10`.

### Execution Steps
1. Open the `main.s43` file in IAR Embedded Workbench.
2. Include the corresponding BSP, HAL, and API files in the project.
3. Compile the project and load it onto the MSP430 microcontroller.
4. Interact with the system using push buttons and observe LED/PWM behaviors.

---

## 📝 Key Concepts

### Abstraction Layers
1. **BSP (Board Support Package)**:
   - Manages hardware-specific configurations like GPIO and timers.
2. **HAL (Hardware Abstraction Layer)**:
   - Contains routines for interfacing with peripherals like LEDs and push buttons.
3. **API (Application Programming Interface)**:
   - Provides high-level access to system features, abstracting away hardware details.
4. **Application Layer**:
   - Implements the main FSM and user interaction logic.

### FSM Architecture
- **Simple FSM**:
  - Linear state transitions triggered by external interrupts.
- **Advanced FSM**:
  - Prioritized state transitions with context saving for interrupted states.

### Key Functionalities
- **State 1**: Binary counting up with LEDs.
- **State 2**: Binary counting down with LEDs.
- **State 3**: PWM signal generation on `P2.7` with a 4 kHz frequency and 75% duty cycle.
- **Idle State**: Low power mode with LEDs off.

---