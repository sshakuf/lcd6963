// https://forum.arduino.cc/index.php?topic=22624.0
// http://en.radzio.dxp.pl/t6963/

#include <Arduino.h>
#include "GDT6963C.h"

void setup()
{

  // //PORT A FOR SEGMENT 1
  // DDRA = B11111111; //initialize port pins as output 22-29

  // //PORT C FOR SEGMENT 2
  // DDRC = B11111111; //initialize port pins as output 37-30

  // //sets both segment as zero
  // PORTA = B0111111;
  // PORTC = B0111111;

  GLCD_Initalize();                     // Initalize LCD
  GLCD_ClearText();                     // Clear text area
  GLCD_ClearCG();                       // Clear character generator area
  GLCD_ClearGraphic();                  // Clear graphic area
  GLCD_TextGoTo(0, 0);                  // set text coordinates
  GLCD_WriteString("Hello world !!! "); // write text
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{

  digitalWrite(LED_BUILTIN, HIGH); // turn the LED on (HIGH is the voltage level)
  delay(1000);                     // wait for a second
  digitalWrite(LED_BUILTIN, LOW);  // turn the LED off by making the voltage LOW
  delay(1000);                     // wait for a second

  //  delay(1000);
  //  GLCD_TextGoTo(3, 3);         // set text coordinates
  //  GLCD_WriteString("AaAaAaA"); // write text
  //
  //  delay(1000);
  //  GLCD_TextGoTo(3, 3);          // set text coordinates
  //  GLCD_WriteString("BbBbBbBb"); // write text
}

// https://forum.arduino.cc/index.php?topic=22624.0
// conection arduino mega/winstar wg240128A

// 1      GND
// 2     GND
// 3    5V
// 4    CONTRAST
// 5       wr              35
// 6        rd            34
// 7        cs            37
// 8    CD             36
// 9     VEE            No conectionקדASDASג
// 10     resset        33
// 11     D0         49
// 12     D1          48
// 13     D2        47
// 14     D3        46
// 15     D4             45
// 16     D5        44
// 17     D6        43
// 18     D7          42
// 19    FS1        GND
// 20     gnd signal low



// https://diyi0t.com/arduino-mega-tutorial/
// https://www.arduino.cc/en/Hacking/PinMapping2560