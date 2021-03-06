/*
 Sketch "FadeRGBLED":
 Fade a RGB LED on which is connected to pins: 9 (red), 10 (green), and 11 (blue) 
 using the analogWrite() function.
 
 Modified by: Pearl Chen
 This example code is in the public domain.
 */

// the pins that the led rgb pins are attached to
int redLed = 9;        
int blueLed = 10;
int greenLed = 11;

int brightness = 0;    // how bright the led is
int fadeAmount = 5;    // how many points to fade the led by

// the setup routine runs once when you press reset:
void setup()  { 
  // declare all led pins to be an output:
  pinMode(redLed, OUTPUT);
  pinMode(blueLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
} 

// the loop routine runs over and over again forever:
void loop()  { 
  // set the brightness of red pin:
  analogWrite(redLed, brightness);

  // set the brightness of blue pin:
  analogWrite(blueLed, brightness); 

  // set the brightness of green pin:
  analogWrite(greenLed, brightness);   

  // change the brightness for next time through the loop:
  brightness = brightness + fadeAmount;

  // reverse the direction of the fading at the ends of the fade: 
  if (brightness == 0 || brightness == 255) {
    fadeAmount = -fadeAmount ; 
  }     
  // wait for 30 milliseconds to see the dimming effect    
  delay(30);                            
}

