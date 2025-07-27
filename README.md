# CAN Bus Parser (Embedded C)

🛠️ A simple CAN bus message parser that simulates reading vehicle messages in C.

---

## 📄 What It Does

- Parses mock CAN messages received as byte arrays
- Extracts basic vehicle data: speed, steering angle, and brake status
- Simulates embedded system behavior for testing/demo purposes

---

## 📁 File Structure

can-bus-parser
Simple CAN message parser written in Embedded C

can-bus-parser/
- src/can_parser.c # Main parser logic and test
- include/can_parser.h # Header file for the parser
- test/test_cases.txt # Raw example CAN data (hex)
- Makefile # Simple build script
- README.md # This file

---

## ▶️ How to Run

Clone the repo and build using GCC:

```bash
make          # Builds can_parser executable
./can_parser  # Runs the parser with test data
```

---

## 🖥️ Sample Output:

Test 1:
- Speed: 10 km/h
- Steering: 20 deg
- Brake: Released

Test 2:
- Speed: 40 km/h
- Steering: 50 deg
- Brake: Applied

---

## 🔧 Technologies Used

- 💻 Language: Embedded C
- 🧰 Tools: GCC, Makefile
- 🧪 Test Data: Hex byte stream simulation

---

## 💡 Concepts Demonstrated

- Bit-level parsing of CAN messages
- Basic embedded C structuring (src/include/test)
- Simple console-based simulation of real vehicle systems
- Useful for automotive system testing, interviews, and learning

---


