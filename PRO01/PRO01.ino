/**********************************************************************************
**                                                                               **
**                              Cruïla de semàfors                               **
**                                                                               **
**  Sergio Martínez                                             18/02/2019       **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int led0 = 7;          // donar nom al pin 7 de l’Arduino
const int led1 = 8;          // donar nom al pin 8 de l’Arduino
const int led2 = 9;          // donar nom al pin 9 de l’Arduino
const int led3 = 10;         // donar nom al pin 10 de l’Arduino
const int led4 = 11;         // donar nom al pin 11 de l’Arduino
const int led5 = 12;         // donar nom al pin 12 de l’Arduino

//********** Setup ****************************************************************
void setup()
{
  pinMode(led0, OUTPUT);     
  pinMode(led1, OUTPUT);     
  pinMode(led2, OUTPUT);     
  pinMode(led3, OUTPUT);     
  pinMode(led4, OUTPUT);     
  pinMode(led5, OUTPUT);     
}

//********** Loop *****************************************************************
void loop()
{
  digitalWrite(led0, HIGH);    
  digitalWrite(led1, LOW);    
  digitalWrite(led2, LOW);   
  digitalWrite(led3, HIGH);    
  digitalWrite(led4, LOW);    
  digitalWrite(led5, LOW);    

  delay(1000);

  digitalWrite(led0, HIGH);    
  digitalWrite(led1, LOW);   
  digitalWrite(led2, LOW);   
  digitalWrite(led3, LOW);   
  digitalWrite(led4, LOW);    
  digitalWrite(led5, HIGH);   

  delay(1000);

  digitalWrite(led0, HIGH);    
  digitalWrite(led1, LOW);   
  digitalWrite(led2, LOW);    
  digitalWrite(led3, LOW);   
  digitalWrite(led4, LOW);   
  digitalWrite(led5, HIGH);    

  delay(1000);

  digitalWrite(led0, HIGH);   
  digitalWrite(led1, LOW);    
  digitalWrite(led2, LOW);    
  digitalWrite(led3, LOW);   
  digitalWrite(led4, LOW); 
  digitalWrite(led5, HIGH);    

  delay(1000);

  digitalWrite(led0, HIGH);    
  digitalWrite(led1, LOW);    
  digitalWrite(led2, LOW);  
  digitalWrite(led3, LOW);    
  digitalWrite(led4, LOW);   
  digitalWrite(led5, HIGH);  

  delay(1000);

  digitalWrite(led0, HIGH);    
  digitalWrite(led1, LOW);    
  digitalWrite(led2, LOW);    
  digitalWrite(led3, LOW);   
  digitalWrite(led4, HIGH);  
  digitalWrite(led5, LOW);    

  delay(1000);

  digitalWrite(led0, HIGH);   
  digitalWrite(led1, LOW);    
  digitalWrite(led2, LOW);    
  digitalWrite(led3, HIGH);    
  digitalWrite(led4, LOW);  
  digitalWrite(led5, LOW);    

  delay(1000);

  digitalWrite(led0, LOW);   
  digitalWrite(led1, LOW);    
  digitalWrite(led2, HIGH);    
  digitalWrite(led3, HIGH);  
  digitalWrite(led4, LOW);    
  digitalWrite(led5, LOW);    

  delay(1000);

  digitalWrite(led0, LOW);   
  digitalWrite(led1, LOW);    
  digitalWrite(led2, HIGH);  
  digitalWrite(led3, HIGH);    
  digitalWrite(led4, LOW);    
  digitalWrite(led5, LOW);    

  delay(1000);

  digitalWrite(led0, LOW);    
  digitalWrite(led1, LOW);   
  digitalWrite(led2, HIGH);   
  digitalWrite(led3, HIGH);  
  digitalWrite(led4, LOW);   
  digitalWrite(led5, LOW);    

  delay(1000);

  digitalWrite(led0, LOW);   
  digitalWrite(led1, LOW);  
  digitalWrite(led2, HIGH);    
  digitalWrite(led3, HIGH);    
  digitalWrite(led4, LOW);    
  digitalWrite(led5, LOW);    

  delay(1000);

  digitalWrite(led0, LOW);  
  digitalWrite(led1, HIGH);  
  digitalWrite(led2, LOW);    
  digitalWrite(led3, HIGH);   
  digitalWrite(led4, LOW);  
  digitalWrite(led5, LOW);    

  delay(1000);

  digitalWrite(led0, HIGH);    
  digitalWrite(led1, LOW);    
  digitalWrite(led2, LOW);    
  digitalWrite(led3, HIGH);    
  digitalWrite(led4, LOW);    
  digitalWrite(led5, LOW);    

  delay(1000);

}
