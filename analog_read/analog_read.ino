int potpin=0;// initialize analog pin 0
int ledpin=9;// initialize digital pin 9
int val=0;// define val, assign initial value 0

void setup()
{
  Serial.begin(9600);// set baud rate at 9600
  pinMode(ledpin, OUTPUT);

}
void loop()
{
  val=analogRead(potpin);// read the analog value of analog pin 0, and assign it to val
  analogWrite(ledpin, val / 4);
  Serial.println(val);// display val’s value
}
