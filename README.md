# Fork of WCH32 Arduino Core, with added support for WeAct ch32x035f8u6 board, and some bug fixes, work in progress

* [Introduction](https://github.com/bartosz-777/arduino_core_weact_ch32x035##_Whats_working)<br>

## Whats working

* anything that was primarly supported by original project(although some things in this projects are messy, and the ch32x035 is weird and seems to be less supported)
* Added "board" for the WeAct board, LED_BUILITIN is implemented, USER_BTN corresponds to onboard button serial is on PA2,PA3
* fixed Serial.available()



## Supported libraries
List of libraries that are tested working on this hardware
* Modbus RTU(curently this library only suports 0x03- read holding registers, but i might fork it and add support for other features)  https://github.com/stephane/modbusino/tree/master
