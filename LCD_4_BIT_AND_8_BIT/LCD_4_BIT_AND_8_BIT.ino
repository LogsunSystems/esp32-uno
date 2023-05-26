#include <LiquidCrystal.h>
/* Create object named lcd of the class LiquidCrystal */
//LiquidCrystal lcd(17, 16, 15, 22, 21, 25, 26, 27, 4, 0, 2);  /* For 8-bit mode */
LiquidCrystal lcd(22, 21, 25, 27, 4, 0, 2);   /* For 4-bit mode */

unsigned char Character1[8] = { 0x04, 0x1F, 0x11, 0x11, 0x1F, 0x1F, 0x1F, 0x1F }; /* Custom Character 1 */
unsigned char Character2[8] = { 0x01, 0x03, 0x07, 0x1F, 0x1F, 0x07, 0x03, 0x01 }; /* Custom Character 2 */

void setup() {
  lcd.begin(16,2);          /* Initialize 16x2 LCD */
  lcd.clear();            /* Clear the LCD */
  lcd.createChar(0, Character1);  /* Generate custom character */
  lcd.createChar(1, Character2);
}

void loop() {
  lcd.setCursor(0,0);       /* Set cursor to column 0 row 0 */
  lcd.print("Welcome to");     /* Print data on display */
  lcd.setCursor(0,1);  
  lcd.print("Logsun System");       /* Write a character to display */
  //lcd.write(1);
}
