const int buttonPinQ = 13;
const int buttonPinCAPS = 12;
const int buttonPinZ = 11;
const int buttonPin1 = 10;
const int buttonPinW = 9;
const int buttonPinX = 8;
const int buttonPinA = 7;
const int buttonPinS = 6;
const int buttonPin2 = 5;
const int buttonPinC = 4;
const int buttonPinE = 3;
const int buttonPinD = 2;
const int buttonPin3 = 44;
const int buttonPinR = 14;
const int buttonPinV = 15;
const int buttonPinT = 16;
const int buttonPin4 = 17;
const int buttonPinF = 18;
const int buttonPin5 = 19;
const int buttonPinY = 20;
const int buttonPinG = 21;
const int buttonPinB = 22;
const int buttonPinU = 23;
const int buttonPin6 = 24;
const int buttonPinH = 25;
const int buttonPinN = 26;
const int buttonPin7 = 27;
const int buttonPinJ = 28;
const int buttonPinK = 29;
const int buttonPinM = 30;
const int buttonPin8 = 31;
const int buttonPinCOMMA = 32;
const int buttonPinPERIOD = 33;
const int buttonPin9 = 34;
const int buttonPinL = 35;
const int buttonPinO = 36;
const int buttonPinSEMI = 37;
const int buttonPinBACKSLASH = 38;
const int buttonPinP = 39;
const int buttonPinSPACE = 40;
const int buttonPinRETURN = 41;
const int buttonPin0=43;
const int buttonPinI=45;


int buttonStateQ = 0;         // variable for reading the pushbutton status
int buttonStateCAPS = 0;         // variable for reading the pushbutton status
int buttonStateZ = 0;         // variable for reading the pushbutton status
int buttonState1 = 0;         // variable for reading the pushbutton status
int buttonStateW = 0;         // variable for reading the pushbutton status
int buttonStateX = 0;         // variable for reading the pushbutton status
int buttonStateA = 0;         // variable for reading the pushbutton status
int buttonStateS = 0;         // variable for reading the pushbutton status
int buttonState2 = 0;         // variable for reading the pushbutton status
int buttonStateC = 0;         // variable for reading the pushbutton status
int buttonStateE = 0;
int buttonStateD = 0;
int buttonState3 = 0;
int buttonStateR = 0;
int buttonStateV = 0;
int buttonStateT = 0;
int buttonState4 = 0;
int buttonStateF = 0;
int buttonState5 = 0;
int buttonStateY = 0;
int buttonStateG = 0;
int buttonStateB = 0;
int buttonStateU = 0;
int buttonState6 = 0;
int buttonStateH = 0;
int buttonStateN = 0;
int buttonState7 = 0;
int buttonStateJ = 0;
int buttonStateK = 0;
int buttonStateM = 0;
int buttonState8 = 0;
int buttonStateCOMMA = 0;
int buttonStatePERIOD = 0;
int buttonState9 = 0;
int buttonStateL = 0;
int buttonStateO = 0;
int buttonStateSEMI = 0;
int buttonStateBACKSLASH = 0;
int buttonStateP = 0;
int buttonStateSPACE = 0;
int buttonStateRETURN = 0;
int buttonState0=0;
int buttonStateI=0;

void setup() {
  Serial.begin(9600);
  pinMode(15,INPUT_PULLUP);
  pinMode(14,INPUT_PULLUP);
  pinMode(13,INPUT_PULLUP);
  pinMode(12,INPUT_PULLUP);
  pinMode(11,INPUT_PULLUP);
  pinMode(10,INPUT_PULLUP);
  pinMode(9,INPUT_PULLUP);
  pinMode(8,INPUT_PULLUP);
  pinMode(7,INPUT_PULLUP);
  pinMode(6,INPUT_PULLUP);
  pinMode(5,INPUT_PULLUP);
  pinMode(4,INPUT_PULLUP);
  pinMode(3,INPUT_PULLUP);
  pinMode(2,INPUT_PULLUP);
  pinMode(44,INPUT_PULLUP);
  pinMode(16,INPUT_PULLUP);
  pinMode(17,INPUT_PULLUP);
  pinMode(18,INPUT_PULLUP);
  pinMode(19,INPUT_PULLUP);
  pinMode(20,INPUT_PULLUP);
  pinMode(21,INPUT_PULLUP);
  pinMode(22,INPUT_PULLUP);
  pinMode(23,INPUT_PULLUP);
  pinMode(24,INPUT_PULLUP);
  pinMode(25,INPUT_PULLUP);
  pinMode(26,INPUT_PULLUP);
  pinMode(27,INPUT_PULLUP);
  pinMode(28,INPUT_PULLUP);
  pinMode(29,INPUT_PULLUP);
  pinMode(30,INPUT_PULLUP);
  pinMode(31,INPUT_PULLUP);
  pinMode(32,INPUT_PULLUP);
  pinMode(33,INPUT_PULLUP);
  pinMode(34,INPUT_PULLUP);
  pinMode(35,INPUT_PULLUP);
  pinMode(36,INPUT_PULLUP);
  pinMode(37,INPUT_PULLUP);
  pinMode(38,INPUT_PULLUP);
  pinMode(39,INPUT_PULLUP);
  pinMode(40,INPUT_PULLUP);
  pinMode(41,INPUT_PULLUP);
  pinMode(43,INPUT_PULLUP);
  pinMode(45,INPUT_PULLUP);
}

void loop() {
  // read the state of the pushbutton value:
  
  buttonStateQ = digitalRead(13);
  buttonStateCAPS = digitalRead(12);
  buttonStateZ = digitalRead(11);
  buttonState1 = digitalRead(10);
  buttonStateW = digitalRead(9);
  buttonStateX = digitalRead(8);
  buttonStateA = digitalRead(7);
  buttonStateS = digitalRead(6);
  buttonState2 = digitalRead(5);
  buttonStateC = digitalRead(4);
  buttonStateE = digitalRead(3);
  buttonStateD = digitalRead(2);
  buttonState3 = digitalRead(44);
  buttonStateR = digitalRead(14);
  buttonStateV = digitalRead(15);
  buttonStateT = digitalRead(16);
  buttonState4 = digitalRead(17);
  buttonStateF = digitalRead(18);
  buttonState5 = digitalRead(19);
  buttonStateY = digitalRead(20);
  buttonStateG = digitalRead(21);
  buttonStateB = digitalRead(22);
  buttonStateU = digitalRead(23);
  buttonState6 = digitalRead(24);
  buttonStateH = digitalRead(25);
  buttonStateN = digitalRead(26);
  buttonState7 = digitalRead(27);
  buttonStateJ = digitalRead(28);
  buttonStateK = digitalRead(29);
  buttonStateM = digitalRead(30);
  buttonState8 = digitalRead(31);
  buttonStateCOMMA = digitalRead(32);
  buttonStatePERIOD = digitalRead(33);
  buttonState9 = digitalRead(34);
  buttonStateL = digitalRead(35);
  buttonStateO = digitalRead(36);
  buttonStateSEMI = digitalRead(37);
  buttonStateBACKSLASH = digitalRead(38);
  buttonStateP = digitalRead(39);
  buttonStateSPACE = digitalRead(40);
  buttonStateRETURN = digitalRead(41);
  buttonState0 = digitalRead(43);
  buttonStateI = digitalRead(45);
  
  
  if(buttonStateQ==LOW and buttonStateCAPS == LOW){
    delay(150);
    Serial.print("Q");
  }
  else if(buttonStateQ==LOW and buttonStateCAPS == HIGH){
    delay(150);
    Serial.print("q");
  }
  else if(buttonStateZ==LOW and buttonStateCAPS == LOW){
    delay(150);
    Serial.print("Z");
  }
  else if(buttonStateZ==LOW and buttonStateCAPS == HIGH){
    delay(150);
    Serial.print("z");
  }
  else if(buttonStateW==LOW and buttonStateCAPS == LOW){
    delay(150);
    Serial.print("W");
  }
  else if(buttonStateW==LOW and buttonStateCAPS == HIGH){
    delay(150);
    Serial.print("w");
  }
  else if(buttonStateX==LOW and buttonStateCAPS == LOW){
    delay(150);
    Serial.print("X");
  }
  else if(buttonStateX==LOW and buttonStateCAPS == HIGH){
    delay(150);
    Serial.print("x");
  }
  else if(buttonStateA==LOW and buttonStateCAPS == LOW){
    delay(150);
    Serial.print("A");
  }
  else if(buttonStateA==LOW and buttonStateCAPS == HIGH){
    delay(150);
    Serial.print("a");
  }
  else if(buttonStateS==LOW and buttonStateCAPS == LOW){
    delay(150);
    Serial.print("S");
  }
  else if(buttonStateS==LOW and buttonStateCAPS == HIGH){
    delay(150);
    Serial.print("s");
  }
  else if(buttonStateC==LOW and buttonStateCAPS == LOW){
    delay(150);
    Serial.print("C");
  }
  else if(buttonStateC==LOW and buttonStateCAPS == HIGH){
    delay(150);
    Serial.print("c");
  }
  else if(buttonStateE==LOW and buttonStateCAPS == LOW){
    delay(150);
    Serial.print("E");
  }
  else if(buttonStateE==LOW and buttonStateCAPS == HIGH){
    delay(150);
    Serial.print("e");
  }
  else if(buttonStateD==LOW and buttonStateCAPS == LOW){
    delay(150);
    Serial.print("D");
  }
  else if(buttonStateD==LOW and buttonStateCAPS == HIGH){
    delay(150);
    Serial.print("d");
  }
  else if(buttonStateR==LOW and buttonStateCAPS == LOW){
    delay(150);
    Serial.print("R");
  }
  else if(buttonStateR==LOW and buttonStateCAPS == HIGH){
    delay(150);
    Serial.print("r");
  }
  else if(buttonStateV==LOW and buttonStateCAPS == LOW){
    delay(150);
    Serial.print("V");
  }
  else if(buttonStateV==LOW and buttonStateCAPS == HIGH){
    delay(150);
    Serial.print("v");
  }
  else if(buttonStateT==LOW and buttonStateCAPS == LOW){
    delay(150);
    Serial.print("T");
  }
  else if(buttonStateT==LOW and buttonStateCAPS == HIGH){
    delay(150);
    Serial.print("t");
  }
  else if(buttonStateF==LOW and buttonStateCAPS == LOW){
    delay(150);
    Serial.print("F");
  }
  else if(buttonStateF==LOW and buttonStateCAPS == HIGH){
    delay(150);
    Serial.print("f");
  }
  else if(buttonStateY==LOW and buttonStateCAPS == LOW){
    delay(150);
    Serial.print("Y");
  }
  else if(buttonStateY==LOW and buttonStateCAPS == HIGH){
    delay(150);
    Serial.print("y");
  }
  else if(buttonStateG==LOW and buttonStateCAPS == LOW){
    delay(150);
    Serial.print("G");
  }
  else if(buttonStateG==LOW and buttonStateCAPS == HIGH){
    delay(150);
    Serial.print("g");
  }
  else if(buttonStateB==LOW and buttonStateCAPS == LOW){
    delay(150);
    Serial.print("B");
  }
  else if(buttonStateB==LOW and buttonStateCAPS == HIGH){
    delay(150);
    Serial.print("b");
  }
  else if(buttonStateU==LOW and buttonStateCAPS == LOW){
    delay(150);
    Serial.print("U");
  }
  else if(buttonStateU==LOW and buttonStateCAPS == HIGH){
    delay(150);
    Serial.print("u");
  }
  else if(buttonStateH==LOW and buttonStateCAPS == LOW){
    delay(150);
    Serial.print("H");
  }
  else if(buttonStateH==LOW and buttonStateCAPS == HIGH){
    delay(150);
    Serial.print("h");
  }
  else if(buttonStateN==LOW and buttonStateCAPS == LOW){
    delay(150);
    Serial.print("N");
  }
  else if(buttonStateN==LOW and buttonStateCAPS == HIGH){
    delay(150);
    Serial.print("n");
  }
  else if(buttonStateJ==LOW and buttonStateCAPS == LOW){
    delay(150);
    Serial.print("J");
  }
  else if(buttonStateJ==LOW and buttonStateCAPS == HIGH){
    delay(150);
    Serial.print("j");
  }
  else if(buttonStateK==LOW and buttonStateCAPS == LOW){
    delay(150);
    Serial.print("K");
  }
  else if(buttonStateK==LOW and buttonStateCAPS == HIGH){
    delay(150);
    Serial.print("k");
  }
  else if(buttonStateM==LOW and buttonStateCAPS == LOW){
    delay(150);
    Serial.print("M");
  }
  else if(buttonStateM==LOW and buttonStateCAPS == HIGH){
    delay(150);
    Serial.print("m");
  }
  else if(buttonStateCOMMA==LOW and buttonStateCAPS == HIGH){
    delay(150);
    Serial.print(",");
  }
  else if(buttonStatePERIOD==LOW and buttonStateCAPS == HIGH){
    delay(150);
    Serial.print(".");
  }
  else if(buttonStateL==LOW and buttonStateCAPS == LOW){
    delay(150);
    Serial.print("L");
  }
  else if(buttonStateL==LOW and buttonStateCAPS == HIGH){
    delay(150);
    Serial.print("l");
  }
  else if(buttonStateO==LOW and buttonStateCAPS == LOW){
    delay(150);
    Serial.print("O");
  }
  else if(buttonStateO==LOW and buttonStateCAPS == HIGH){
    delay(150);
    Serial.print("o");
  }
  else if(buttonStateSEMI==LOW and buttonStateCAPS == HIGH){
    delay(150);
    Serial.print(";");
  }
  else if(buttonStateBACKSLASH==LOW and buttonStateCAPS == HIGH){
    delay(150);
    Serial.print("/");
  }
  else if(buttonStateP==LOW and buttonStateCAPS == LOW){
    delay(150);
    Serial.print("P");
  }
  else if(buttonStateP==LOW and buttonStateCAPS == HIGH){
    delay(150);
    Serial.print("p");
  }
  else if(buttonStateSPACE==LOW){
    delay(150);
    Serial.print(" ");
  }
  else if(buttonStateRETURN==LOW){
    delay(150);
    Serial.println("");
  }
  else if(buttonStateI==LOW and buttonStateCAPS == LOW){
    delay(150);
    Serial.print("I");
  }
  else if(buttonStateI==LOW and buttonStateCAPS == HIGH){
    delay(150);
    Serial.print("i");
  }

  //Number Keys
  else if(buttonState0==LOW and buttonStateCAPS == HIGH){
    delay(180);
    Serial.print("0");
  }
  else if(buttonState1==LOW and buttonStateCAPS == HIGH){
    delay(180);
    Serial.print("1");
  }
  else if(buttonState2==LOW and buttonStateCAPS == HIGH){
    delay(180);
    Serial.print("2");
  }
  else if(buttonState3==LOW and buttonStateCAPS == HIGH){
    delay(180);
    Serial.print("3");
  }
  else if(buttonState4==LOW and buttonStateCAPS == HIGH){
    delay(180);
    Serial.print("4");
  }
  else if(buttonState5==LOW and buttonStateCAPS == HIGH){
    delay(180);
    Serial.print("5");
  }
  else if(buttonState6==LOW and buttonStateCAPS == HIGH){
    delay(180);
    Serial.print("6");
  }
  else if(buttonState7==LOW and buttonStateCAPS == HIGH){
    delay(180);
    Serial.print("7");
  }
  else if(buttonState8==LOW and buttonStateCAPS == HIGH){
    delay(180);
    Serial.print("8");
  }
  else if(buttonState9==LOW and buttonStateCAPS == HIGH){
    delay(180);
    Serial.print("9");
  }
  




  
}
