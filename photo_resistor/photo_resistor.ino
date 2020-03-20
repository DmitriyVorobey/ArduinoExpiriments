int potpin=0;
int ledpinred=9;
int ledpinblue=10;
int ledpinyellow=11;



void setup() {
  Serial.begin(9600);// set baud rate at 9600
  pinMode(ledpinred, OUTPUT);
  pinMode(ledpinblue, OUTPUT);
  pinMode(ledpinyellow, OUTPUT);
}

void loop() {
  delay(200);
  // put your main code here, to run repeatedly:
  int val=analogRead(potpin);// read the analog value of the sensor and assign it to val
  Serial.println(val);// display the value of val

  if(val < 150) {
    digitalWrite(ledpinred,HIGH);

    digitalWrite(ledpinblue,LOW);
    digitalWrite(ledpinyellow,LOW);
  }
  if(val > 150 && val < 250){
    digitalWrite(ledpinblue,HIGH);

    digitalWrite(ledpinred,LOW);
    digitalWrite(ledpinyellow,LOW);
  }
  if(val > 250){
    digitalWrite(ledpinyellow,HIGH);

    digitalWrite(ledpinred,LOW);
    digitalWrite(ledpinblue,LOW);
  }

}
