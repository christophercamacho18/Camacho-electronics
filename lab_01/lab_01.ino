// Christopher Camacho
// lab 01

//Functions

void printHappy(String name) {
 Serial.println("I am an Arduino and I communicate at");
 Serial.println("9600 Baud rate. Ports 0 and 1 are used");
 Serial.println("for serial communication.");
 Serial.println("Serial communication works well for debugging");
 Serial.println("and monitoring sensor values during the");
 Serial.println("execution of a program.");

 }

float computeArea(float wid, float hei) {
  float area = wid * hei;
  return area;
  
}

void function3() {
  
  Serial.println("My favorite movie characters are: ");
String names [] = {"C3P0", "R2D2", "Luke SkyWalker", "Han Solo", "Doctor Who"};
for (int i = 0; i < 5; i++){
  Serial.println(names[i]);
}
}


void function4() {
  int array[] = {1,2,3,4,5,6,7,8};
  for (int i = 0; i < 8; i++){
    Serial.println(array[i]);
  }
  for (int i = 7; i > -1; i--){
  Serial.println(array[i]);
  }
  for (int i = 1; i < 8; i+=2){
    Serial.println(array[i]);
  }
  for (int i = 0; i < 7; i+=2){
    Serial.println(array[i]);
  }
  for (int i = 6; i > -1; i-=2){
    Serial.println(array[i]);
  }
for (int i = 7; i > 0; i -=2){
  Serial.println(array[i]);
}
  
}



void function2a(int x, int y) {
Serial.println((x/2) * y);
}

void function2b(int x, int y) {

Serial.println(2*x + x*y);
}


void function5() {
  String array[] = {"C", "D", "E", "F", "G", "A", "B", "C"};
    for (int i = 0; i < 8; i++) {
      Serial.println(array[i]);
    }
    for (int i = 7; i > -1; i--) {
   Serial.println(array[i]);
    }   
}

void printFibo(int n) {
  int array[] = {0, 1, 0};
  for (int i = 0; i < n; i++) {
    array[2] = array[0] + array[1];
    Serial.println(array[2]);
    array[0] = array[1];
    array[1] = array[2];
  } 
  
}

void function9(int maxNum){
  int total;
  for (int i = 0; i < maxNum; i+=3) {
    total = total + i;
  }
  for (int i = 1; i < 5; i+=5) {
    total = total + i;
  }  
  Serial.println(total);
}

void function10(){
  String array[] = {"Turtle ", "Frog ", "Cow ", "Horse ", "Fish "};
  Serial.println("");
  for(int i = 0; i<5; i++){
    Serial.print(array[random(4)]);
  }
  
}


float findAreaRectangle(int a, int b) {
  float c = a * b ;
  return c;  
}

// Wild numbers
void function8() {
 for (int i = 0; i < 100000; i++) {
 Serial.println(i*10);
 }
}

void loop() {
 // no code here today
}
//I expect the numbers to be 10,100,1000,10000, and 100000
//The actual numbers were 10,20,30,40...
//This happens because they didnt change the actual value of i





void setup() {
  Serial.begin(9600); //Start serial communication
  printHappy("Christopher");
  printHappy("Reed");
  //Serial.println(function2a(120,512));
  function2a(120,512);
  function2b(97,32);
  function3();
  function4();
  function5();
  printFibo(5);
  Serial.println(findAreaRectangle(6,4));
  function8();
  function9(100);
  function10();
  
} //end setup


