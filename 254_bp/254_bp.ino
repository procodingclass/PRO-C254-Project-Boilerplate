//  including libraries
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

//  screen dimensions
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

//  creating display object
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT , &Wire , -1);

//  mouth_radius and change value
int mouth_radius = 5;
int change = 1;

void setup()   
{
  Serial.begin(115200);
  
  // initialize with the I2C addr 0x3C
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C))
  {
    Serial.println("Failed"); 
    while(1);
  }

  // Clear the buffer.
  display.clearDisplay();
}

void loop() 
{
  //  clear the display first
  display.clearDisplay();

  //  wow text
  

  //outer face
  
  
  //  left eye
  
  
  //  right eye
  
  
  //  create the mouth using mouth_radius variable
  

  //  display all the shapes
  display.display();
  delay(50);

  //  if mouth_radius value is 15, decrement it
  if (mouth_radius  ==  15)
  {
    change = -1;
    delay(500);
  }

  //  if mouth_radius value is 5, increment 1
  else if (mouth_radius  ==  5)
  {
    change = 1;
    delay(500);
  }

  //  change the mouth radius
  mouth_radius = mouth_radius + change;
  
}
