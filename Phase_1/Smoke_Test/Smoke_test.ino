#include <FastLED.h>

//top
#define DATA_PIN1 2
#define NUM_LEDS1 29

//right
#define DATA_PIN2 3
#define NUM_LEDS2 18

//bottom
#define DATA_PIN3 4
#define NUM_LEDS3 31

//left
#define DATA_PIN4 5
#define NUM_LEDS4 20



int pattern [2][4] = {{DATA_PIN1, DATA_PIN2, DATA_PIN3, DATA_PIN4}, {NUM_LEDS1, NUM_LEDS2, NUM_LEDS3, NUM_LEDS4}};

CRGB led1[NUM_LEDS1];
CRGB led2[NUM_LEDS2];
CRGB led3[NUM_LEDS3];
CRGB led4[NUM_LEDS4];

void setup() {
  FastLED.addLeds<WS2811, DATA_PIN1 , RGB>(led1, NUM_LEDS1);
  FastLED.addLeds<WS2811, DATA_PIN2 , RGB>(led2, NUM_LEDS2);
  FastLED.addLeds<WS2811, DATA_PIN3 , RGB>(led3, NUM_LEDS3);
  FastLED.addLeds<WS2811, DATA_PIN4 , RGB>(led4, NUM_LEDS4);
  Serial.begin(9600);
  for (int i = 0; i <= 1; i++)
  {
    for (int j = 0; j <= 3; j++)
    {
      Serial.print(pattern [i][j]);
      Serial.print("\t");
    }
    Serial.print("\n");
  }
}
int i = 0;
void loop() {


  for (int i = 0; i <= NUM_LEDS2 ; i++) {
    led2[i] = CRGB ( 0, 255, 255);
    FastLED.show();
    delay(10);
    led2[i] = CRGB ( 0, 0, 0);
    FastLED.show();
  }
  for (int i = 0; i <= NUM_LEDS1 ; i++) {
    led1[i] = CRGB ( 0, 0, 255);
    FastLED.show();
    delay(10);
    led1[i] = CRGB ( 0, 0, 0);
    FastLED.show();
  }
  for (int i = 0; i <= NUM_LEDS4 ; i++) {
    led4[i] = CRGB ( 0, 255, 0);
    FastLED.show();
    delay(10);
    led4[i] = CRGB ( 0, 0, 0);
    FastLED.show();
  }

  for (int i = 0; i <= NUM_LEDS3 ; i++) {
    led3[i] = CRGB ( 0, 0, 255);
    FastLED.show();
    delay(10);
    led3[i] = CRGB ( 0, 0, 0);
    FastLED.show();
  }


}
