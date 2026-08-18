# LED-Memory-Game

Hello this is my arduino memory test game project. It features 2 leds which will cycle and light up in a particular order and then you have to press the corresponding button in that order. Making an error or misinput means you lose. 

I did this beause I made a project before on reaction time and thought this would be another step slash another cool project I could do that kind of has that same cognitive testing feeling to it. I also saw some memory testing games online and use to play them when I was younger which motivated me to make this. 

You can any model of aruidno r4 or r3 or any equivalenet microcontroler. To set it up simply just wire as shown in the schema and then you can also upload the code to your arduino through the arduino's own ide and you would be all good. 

Coded using ino c++ code and the arduino ide. No external libaries or extraneous ones used. 

When you start, you have 2 buttons and 2 leds matched up, the leds will start turning on in a sequence, and your goal is to reproduce that sequence (ex: red, blue, red or red,red,blue). A extra step/led will be added to the sequence every turn until you mess up to which it will restart. 

BOM:
| Item | Quantity | Unit | Estimated Unit Price (USD) | Estimated Total (USD) | Purpose |
|---|---:|---|---:|---:|---|
| Push Button | 2 | pcs | $0.20 | $0.40 | Player input buttons |
| Red 5mm LED | 1 | pcs | $0.10 | $0.10 | Red game indicator |
| Blue 5mm LED | 1 | pcs | $0.10 | $0.10 | Blue game indicator |
| 220 Ohm Resistor | 2 | pcs | $0.05 | $0.10 | LED current limiting |
| Passive Buzzer | 1 | pcs | $0.50 | $0.50 | Audio  |
| Solderless Breadboard | 1 | pcs | $6.00 | $6.00 | housing circuit |
| Male-to-Male Jumper Wires | 10 | pcs | $0.15 | $1.50 | connnections |
| Arduino UNO R4 WiFi (or equivalent) | 1 | pcs | $27.00 | $27.00 | Microcontroller |
| **TOTAL** | | | | **$35.70** | **Estimated project total** |

Pin Mapping

| Component | Arduino Pin | Connection |
|---|---:|---|
| Button 1 | D2 | Button → GND |
| Button 2 | D3 | Button → GND |
| Red LED | D4 | D4 → 220Ω resistor → LED → GND |
| Blue LED | D12 | D12 → 220Ω resistor → LED → GND |
| Passive Buzzer | D13 | Positive → D13, Negative → GND |

Demo vid: https://www.youtube.com/watch?v=BlU3b64rzTM

<img width="1205" height="475" alt="image" src="https://github.com/user-attachments/assets/a7b6c1b4-99fc-4419-9d24-087dd9eb38dd" />

<img width="964" height="813" alt="Screenshot 2026-08-18 165338" src="https://github.com/user-attachments/assets/a145e3c2-1895-4c8a-82f4-b33fdd0f490c" />
