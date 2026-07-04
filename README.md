# Motion Detection Alert System using Arduino and PIR Sensor

## Overview

This project is a simple motion detection alert system built using an Arduino board, a PIR (Passive Infrared) motion sensor, and an active buzzer. When the PIR sensor detects motion, the buzzer is activated to provide an audible alert, while the detection status is displayed on the Serial Monitor.

This project serves as a basic home security and intrusion detection system and is suitable for beginners in Arduino and embedded systems.

---

## Features

* Detects human motion using a PIR motion sensor.
* Activates a buzzer when motion is detected.
* Displays real-time motion status on the Serial Monitor.
* Simple and beginner-friendly Arduino code.
* Low-cost and easy to build.

---

## Components Required

* Arduino Uno
* PIR Motion Sensor (HC-SR501 or equivalent)
* Active Buzzer (5V)
* Breadboard
* Jumper Wires
* USB Cable

---

## Circuit Connections

| Component      | Arduino Pin    |
| -------------- | -------------- |
| PIR Sensor VCC | 5V             |
| PIR Sensor GND | GND            |
| PIR Sensor OUT | Digital Pin 8  |
| Buzzer (+)     | Digital Pin 11 |
| Buzzer (-)     | GND            |

---

## Arduino Code

```cpp
#define buzzer 11
#define motion 8

void setup()
{
  pinMode(motion, INPUT);
  pinMode(buzzer, OUTPUT);

  Serial.begin(9600);
}

void loop()
{
  int state = digitalRead(motion);

  if (state == HIGH)
  {
    digitalWrite(buzzer, HIGH);
    Serial.println("Motion Detected");
  }
  else
  {
    digitalWrite(buzzer, LOW);
    Serial.println("No Motion");
  }

  delay(200);
}
```

---

## How It Works

1. The PIR sensor continuously monitors its surroundings for movement.
2. When motion is detected, the sensor outputs a HIGH signal.
3. The Arduino reads the HIGH signal and turns on the buzzer.
4. The Serial Monitor displays **"Motion Detected"**.
5. When no motion is detected, the sensor outputs a LOW signal.
6. The Arduino turns the buzzer off and displays **"No Motion"** on the Serial Monitor.

---

## Applications

* Home Security Alarm
* Room Entry Detection
* Office Security
* Restricted Area Monitoring
* Smart Home Automation
* Arduino Learning Projects

---

## Future Improvements

* Add an LED for visual indication.
* Integrate an ESP32 to send notifications over Wi-Fi.
* Send SMS alerts using a GSM module.
* Store motion events on an SD card.
* Add an OLED or LCD display for status information.
* Include a relay module to trigger external devices such as lights or sirens.

---

## License

This project is licensed under the MIT License.

---

## Author

**Mehadi Hasan Bijoy**
Electrical & Electronic Engineering
Embedded Systems | Arduino | IoT Enthusiast
