#include <usbpd_def.h>
#include <usbpd_sink.h>

#define KEY_INPUT  A10     //PC0

uint8_t myIndex = 0;
uint8_t setVoltage = REQUEST_5v;

void setup() {
  // put your setup code here, to run once:

    Serial.begin(115200);
    TouchKey_init();
}

void loop() {
Touch_Key_Adc(KEY_INPUT);
}
