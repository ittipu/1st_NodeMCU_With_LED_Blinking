//Bangla Vashai IoT shikhi episod_4-Project_1
//LED Blinking With NodeMCU

#define led D8  //Define led pin connect to D8 pin on NodeMCU
void setup() 
{
  pinMode(led, OUTPUT); //Set LED as OUTPUT
  

}

void loop() 
{
  digitalWrite(led, HIGH); //set LED High 
  delay(1000); //delay 1000 milli seconds means 1 seconds led stay on
  digitalWrite(led, LOW); //set LED Low
  delay(1000); //delay 1000 milli seconds means 1 seconds led stay off 

}
