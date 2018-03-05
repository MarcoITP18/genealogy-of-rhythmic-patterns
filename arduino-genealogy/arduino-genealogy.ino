//button pins
const int buttonPin1 = 2;//surdo 1
const int buttonPin2 = 3;//surdo 2
const int buttonPin3 = 4;//tamborim
const int buttonPin4 = 5;//chocalho
const int buttonPin5 = 6;//agogo
const int buttonPin6 = 7;//maracas 1
const int buttonPin7 = 8;//maracas 2
const int buttonPin8 = 9;// tambora
const int buttonPin9 = 10;// alegre
const int buttonPin10 = 11;// llamador
const int buttonPin11 = 12;// piano
const int buttonPin12 = 13;// repique
const int buttonPin13 = A5;// 
const int buttonPin14 = A5;
const int buttonPin15 = A3;

// button values
int buttonState1 = 0; 
int buttonState2 = 0; 
int buttonState3 = 0; 
int buttonState4 = 0; 
int buttonState5 = 0; 
int buttonState6 = 0; 
int buttonState7 = 0;
int buttonState8 = 0; 
int buttonState9 = 0; 
int buttonState10 = 0; 
int buttonState11 = 0; 
int buttonState12 = 0; 
int buttonState13 = 0; 
int buttonState14 = 0;  
int buttonState15 = 0;  

void setup() {
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
  pinMode(buttonPin4, INPUT);
  pinMode(buttonPin5, INPUT);
  pinMode(buttonPin6, INPUT);
  pinMode(buttonPin7, INPUT);
  pinMode(buttonPin8, INPUT);
  pinMode(buttonPin9, INPUT);
  pinMode(buttonPin10, INPUT);
  pinMode(buttonPin11, INPUT);
  pinMode(buttonPin12, INPUT);
  pinMode(buttonPin13, INPUT);
//  pinMode(buttonPin14, INPUT);
  pinMode(buttonPin15, INPUT);

  Serial.begin(9600);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);
  buttonState3 = digitalRead(buttonPin3);
  buttonState4 = digitalRead(buttonPin4);
  buttonState5 = digitalRead(buttonPin5);
  buttonState6 = digitalRead(buttonPin6);
  buttonState7 = digitalRead(buttonPin7);
  buttonState8 = digitalRead(buttonPin8);
  buttonState9 = digitalRead(buttonPin9);
  buttonState10 = digitalRead(buttonPin10);
  buttonState11 = digitalRead(buttonPin11);
  buttonState12 = digitalRead(buttonPin12);
  buttonState13 = digitalRead(buttonPin13);
  buttonState14 = digitalRead(buttonPin14);
  buttonState15 = digitalRead(buttonPin15);

  //Send button values
  Serial.print(buttonState1);
  Serial.print(" ");
  Serial.print(buttonState2);
  Serial.print(" ");
  Serial.print(buttonState3);
  Serial.print(" ");
  Serial.print(buttonState4);
  Serial.print(" ");
  Serial.print(buttonState5);
  Serial.print(" ");
  Serial.print(buttonState6);
  Serial.print(" ");
  Serial.print(buttonState7);
  Serial.print(" ");
  Serial.print(buttonState8);
  Serial.print(" ");
  Serial.print(buttonState9);
  Serial.print(" ");
  Serial.print(buttonState10);
  Serial.print(" ");
  Serial.print(buttonState11);
  Serial.print(" ");
  Serial.print(buttonState12);
  Serial.print(" ");
  Serial.print(buttonState13);
  Serial.print(" ");
  Serial.print(buttonState14);
  Serial.print(" ");
  Serial.print(buttonState15);
  //return to the next line
  Serial.println();
  delay(40);

}

