
unsigned int delay_time = 2;
int outPin1 = 5;
int outPin2 = 8;

void setup() {

  pinMode(outPin1, OUTPUT);
  pinMode(outPin2, OUTPUT);  // sets the digital pin as output
}

void loop() {

  digitalWrite(outPin1, HIGH); // sets the pin on
  digitalWrite(outPin2, HIGH);

  delayMicroseconds(delay_time);

  digitalWrite(outPin1, LOW);
  digitalWrite(outPin2, LOW);// sets the pin off

  delayMicroseconds(delay_time);//pauses for 100 microseconds

}
