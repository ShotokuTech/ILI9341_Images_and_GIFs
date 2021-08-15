#include <TFT_eSPI.h>
#include <SPI.h>
#include "jpeg1.h"
#include "jpeg2.h"
#include "jpeg3.h"
#include "jpeg4.h"
#include "jpeg5.h"

TFT_eSPI tft = TFT_eSPI(); // Invoke custom library

void setup(){
    Serial.begin(115200);
    Serial.println("Start");
    tft.init();
    tft.setRotation(1);
    tft.setSwapBytes(true);
}

void loop(){
    tft.pushImage(0, 0,  320, 240, jpeg1);
    delay(150);  
    tft.pushImage(0, 0,  320, 240, jpeg2);
    delay(150);  
    tft.pushImage(0, 0,  320, 240, jpeg3);
    delay(150);  
    tft.pushImage(0, 0,  320, 240, jpeg4);
    delay(150);
    tft.pushImage(0, 0,  320, 240, jpeg5);
    delay(150);
}
