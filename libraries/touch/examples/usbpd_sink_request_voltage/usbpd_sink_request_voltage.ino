// touchkey example
// connect wire/electrode to PA5, and observe the led or serial output
#include <touchKey.h>
void setup() {
    Serial.begin(115200);
    pinMode(LED_BUILTIN,OUTPUT);
    TouchKey_init();
}

void loop() {
  Serial.print("Touch Key ADC Value: ");
  int value = Touch_Key_Adc(0x05);
  Serial.println(value);
    digitalWrite(LED_BUILTIN,(value<4000)? 1:0); //4000 is pretty sensitive/ adjust to 3900 if the lad stays on or turns on randomly
  delay(300);
}
