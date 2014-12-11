//Christopher Camacho
//LED Blink Program

//My functions
void blink() {
  digitalWrite(9, HIGH);
  delay(1000);
  digitalWrite(9,LOW);
  delay(1000);
}//end blink


//Setup function
void setup() {
  //Setup Pin 9 for output
  pinMode(9, OUTPUT);
}

//loop function
void loop() {
  blink();  
}
