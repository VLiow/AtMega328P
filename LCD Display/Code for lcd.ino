#include <LiquidCrystal.h>
/**********************************************************/
char array1[]=" Vincent Liow ";  //the string to print on the LCD
char array2[]=" How are you ";  //the string to print on the LCD
int tim = 500;  //the value of delay time
// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(4, 6, 10, 11, 12, 13);
/*********************************************************/
void setup()
{
  lcd.begin(16, 2); 
}
/*********************************************************/
void loop() 
{
    lcd.setCursor(15,0);  
    for ( int positionCounter1 = 0; positionCounter1 < 26; positionCounter1++)
    {
      lcd.scrollDisplayLeft();  
      lcd.print(array1[positionCounter1]); 
      delay(tim);  
    }
    lcd.clear();  
    lcd.setCursor(15,1);  
    for (int positionCounter2 = 0; positionCounter2 < 26; positionCounter2++)
    {
      lcd.scrollDisplayLeft();  
      lcd.print(array2[positionCounter2]);  
      delay(tim);  
    }
    lcd.clear();  
}
