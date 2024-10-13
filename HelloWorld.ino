#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); // Format -> (Address,Width,Height )

void setup()
{
  // initialize the lcd
  lcd.init();
  // Turn on the Backlight
  lcd.backlight();
}

void loop()
{
  // Clear the display buffer
  lcd.clear(); 
  // Set cursor (Column, Row)
  lcd.setCursor(0, 0);  
  lcd.print("Hello"); 
  lcd.setCursor(0,1);
  lcd.print("vamsi");

  delay(100);
}
