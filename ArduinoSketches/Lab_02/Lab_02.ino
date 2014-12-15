//Claswork: LED Array Assessment
//Christopher Camacho
//All work here is honestly obtained and is my own

int array1[] = {2,3,4,5,6,7,8,9,9,8,7,6,5,4,3,2};
int array2[] = {9,8,7,6,5,4,3,2,2,3,4,5,6,7,8,9};

void lightDisplay() {
  //This is to make one light turn on then off then move to the next light
  for (int i = 0; i < 16; i++) {
    digitalWrite(array1[i],1);
    delay(200);
    digitalWrite(array1[i], 0);
    delay(200);    
  }  
}

void lightDisplay2() {
  //This is the same design as the first one, but it has two lights turning on and off
  for (int i = 0; i < 16; i++) {
    digitalWrite(array2[i],1);
    digitalWrite(array1[i],1);
    delay(200);
    digitalWrite(array2[i],0);
    digitalWrite(array1[i],0);
    delay(200);
  }
}

void lightDisplay3() {
  //This long piece of code is to have all of the lights turn on and then turn off
  digitalWrite( 2,1);
  digitalWrite( 3,1);
  digitalWrite( 4, 1);
  digitalWrite( 5,1);
  digitalWrite( 6, 1);
  digitalWrite( 7,1);
  digitalWrite( 8,1);
  digitalWrite( 9, 1);
  delay(1000);
  digitalWrite( 2,0);
  digitalWrite( 3,0);
  digitalWrite( 4, 0);
  digitalWrite( 5,0);
  digitalWrite( 6, 0);
  digitalWrite( 7,0);
  digitalWrite( 8,0);
  digitalWrite( 9, 0);
  delay(1000);
  digitalWrite( 2,1);
  digitalWrite( 3,1);
  digitalWrite( 4, 1);
  digitalWrite( 5,1);
  digitalWrite( 6, 1);
  digitalWrite( 7,1);
  digitalWrite( 8,1);
  digitalWrite( 9, 1);
  delay(100);
  digitalWrite( 2,0);
  digitalWrite( 3,0);
  digitalWrite( 4, 0);
  digitalWrite( 5,0);
  digitalWrite( 6, 0);
  digitalWrite( 7,0);
  digitalWrite( 8,0);
  digitalWrite( 9, 0);
  delay(100);
  digitalWrite( 2,1);
  digitalWrite( 3,1);
  digitalWrite( 4, 1);
  digitalWrite( 5,1);
  digitalWrite( 6, 1);
  digitalWrite( 7,1);
  digitalWrite( 8,1);
  digitalWrite( 9, 1);
  delay(10);
  digitalWrite( 2,0);
  digitalWrite( 3,0);
  digitalWrite( 4, 0);
  digitalWrite( 5,0);
  digitalWrite( 6, 0);
  digitalWrite( 7,0);
  digitalWrite( 8,0);
  digitalWrite( 9, 0);
}

int array3[] = {2,4,3,5,4,6,5,7,6,8,7,9,9,7,8,6,7,5,6,4,5,3,4,2};

void lightDisplay4() {
  //This is to have the lights turn on and then have the light before it turn on in a kind of cool pattern
  for (int i = 0; i < 24; i++) {
    digitalWrite(array3[i],1);
    delay(200);
    digitalWrite(array3[i],0);
    delay(200);  
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
  lightDisplay2();
  lightDisplay3();
  lightDisplay4();
}
