//Claswork: LED Array Assessment
//Christopher Camacho
//All work here is honestly obtained and is my own

int array[] = {2,3,4,5,6,7,8,9,9,8,7,6,5,4,3,2};

void lightDisplay() {
  for (int i = 0; i < 16; i++) {
    digitalWrite(array[i],1);
    delay(250);
    digitalWrite(array[i], 0);
    delay(250);    
  }  
}

void setup(){
  pinMode(2, 1);
  pinMode(3, 1);
  pinMode(4, 1);
  pinMode(5,1);
  pinMode(6,1);
  pinMode(7,1);
  pinMode(8,1);
  pinMode(9,1);
  pinMode(10,1);  
}

void loop() {
  lightDisplay();
}
