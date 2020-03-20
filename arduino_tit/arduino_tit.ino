void setup() 
{ 
  pinMode(8,OUTPUT);// set digital pin 8 as “output”
  Serial.begin(9600);
} 
void loop() 
{ 
int i;// define variable i 
while(1) 
{
  delay(200);
  i=analogRead(5);// read the voltage value of analog pin 5
  
  Serial.println(i,1);
  
  if(i>512)// if larger that 512（2.5V） 
  { 
    digitalWrite(8,LOW);// turn on LED 
  } 
  else// otherwise 
  { 
    digitalWrite(8,HIGH);// turn off LED 
  } 
 } 
}
