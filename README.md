# College of Dupage Sail Boat Competition
This repo contains the code for both ESP8266 and ESP32 microcontrollers to be used as both computers and recievers for the cardboard boat competition at College of dupage. This code is made to work with the blynk app through a personal hotspot or Wifi of ones choosing. Extendability was kept in mind for the code so that participants can edit it to accomodate their boat.

## Hardware and Software Used
- ESP8266 or ESP32
- 1 9g Servo
- Arduino IDE
- Blynk app

## Instructions
(if you are a part of the club you will have the ESP8266 controller)

#### Downloads
1. Download the github repository.

2. Install the [Arduino IDE](https://www.arduino.cc/en/Main/Software) in accordance with your OS and architecture.

#### Library Setup
3. Open the IDE and in the top left corner, click Arduino -> Prefrences. In the prefrences window navigate to `Additional Boards Manager URLs:` and paste in the corresponding link to your board:
- ESP32: https://dl.espressif.com/dl/package_esp32_index.json
- ESP8266: http://arduino.esp8266.com/stable/package_esp8266com_index.json

4. Go to Sketch -> Include Library -> Manage Libraries. Search `Blynk` and click on install repeatedly until the error message stops appearing and the library is downloaded.

5. Go to Sketch -> Include Library -> Manage Libraries. Search `esp32` or `esp8266`(Based on your board) and click on install repeatedly until the error message stops appearing and the library is downloaded.

6. Depending on your board, choose one of the options below:
- Go to Sketch -> Include Library -> Manage Libraries. Search `Servo` and click on install repeatedly until the error message stops appearing and the library is downloaded.
- Go to Sketch -> Include Library -> Add ZIP Library. Navigate to the folder for the repository you downloaded and open it. Highlight the `servoESP32` folder and click choose.

7. Go to Tools -> Board: -> Boards Manager. Search `esp32` or `esp8266`(Based on your board) and click on install repeatedly until the error message stops appearing and the Package is downloaded.

#### App Setup
8. In the Blynk app, make a new device by clicking on the nut icon in the top right and clicking on the devices tab. Add a new device, name it, select the corresponding board (nodeMCU), and choose the connection type to be wifi.

9. Go back to the main screen with dots everywhere and swipe left. Under the controllers menu select joystick and place it in the middle of the screen. Name it servo control and select its target to be the board you just made.

10. Under the first box(0), select virtual --> V1, make its range 0 to 180. Select auto return and rotate on tilt to be on and make sure split it selected.

11. When the board is connected to your hotspot you can go back to this app and press the play button on the top right to start the controls.

#### Code Setup
12. Copy the `auth token` and paste it in replacing the `customAuthenticator`.

13. Replace the `ssid` with the exact name of your mobile hotspot and change the `password` to your mobile hotspot password.

#### IDE Setup
14. Go to Tools -> Board: and scroll on the list until you find and select the apropriate board `NodeMCU 1.0 (ESP-12E Module)`.

15. Go to Tools -> Port and select the port that shows up when you plug the arduino into the computer.

16. You can press the right-facing arrow at the top left and upload it to your board.

## Authors
Nikita Lukhanin - [nikilukhan](https://github.com/nikilukhan)
