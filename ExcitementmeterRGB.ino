#define PIN1            13
#define PIN2            12
#define PIN3            11
#define PIN4            10
#define PIN5            9
#define PIN6            8
#define PIN7            7

int data;
//String data2;
String readString;
int i;
int delayval = 500; // delay for half a second
 int delayed = 500;
int delayed1 = 200;
void loop1() {
  digitalWrite(PIN1, HIGH);
  //Serial.println("1 ON");
}

void loop2() {
  loop1();
  digitalWrite(PIN2, HIGH);
  Serial.println("2 ON");
  //loopn(line2);

}
void loop3() {
  loop2();
  digitalWrite(PIN3, HIGH);
  Serial.println("3 ON");
  //loopn(line3);
}


void loop4() {
  loop3();
  digitalWrite(PIN4, HIGH);
  Serial.println("4 ON");
}


void loop5() {
  loop4();
  digitalWrite(PIN5, HIGH);
  Serial.println("5 ON");
}

void loop6() {
  loop5();
  digitalWrite(PIN6, HIGH);
  Serial.println("6 ON");
}


void loop7() {
  loop6();
  Serial.println("7 ON");
  digitalWrite(PIN7, HIGH);
}

void loop0() {
  digitalWrite(PIN1, LOW);
  digitalWrite(PIN2, LOW);
  digitalWrite(PIN3, LOW);
  digitalWrite(PIN4, LOW);
  digitalWrite(PIN5, LOW);
  digitalWrite(PIN6, LOW);
  digitalWrite(PIN7, LOW);
}

void loopn(int NUMPU) {
  Serial.println(NUMPU);
  switch(NUMPU){
    case 2:
  digitalWrite(PIN2, LOW);
  digitalWrite(PIN3, LOW);
  digitalWrite(PIN4, LOW);
  digitalWrite(PIN5, LOW);
  digitalWrite(PIN6, LOW);
  digitalWrite(PIN7, LOW);
  break;
    
    case 3:
  digitalWrite(PIN3, LOW);
  digitalWrite(PIN4, LOW);
  digitalWrite(PIN5, LOW);
  digitalWrite(PIN6, LOW);
  digitalWrite(PIN7, LOW);
  break;
    case 4:
  digitalWrite(PIN4, LOW);
  digitalWrite(PIN5, LOW);
  digitalWrite(PIN6, LOW);
  digitalWrite(PIN7, LOW);
  break;
    case 5:
  digitalWrite(PIN5, LOW);
  digitalWrite(PIN6, LOW);
  digitalWrite(PIN7, LOW);
  break;
    case 6:
    digitalWrite(PIN6, LOW);
  digitalWrite(PIN7, LOW);
  break;
    case 7:
  digitalWrite(PIN7, LOW);
  break;
    
  //delay(50);
}

}

void setup() {
  Serial.begin(19200);
  pinMode(PIN1, OUTPUT);
  pinMode(PIN2, OUTPUT);
  pinMode(PIN3, OUTPUT);
  pinMode(PIN4, OUTPUT);
  pinMode(PIN5, OUTPUT);
  pinMode(PIN6, OUTPUT);
  pinMode(PIN7, OUTPUT);
  loop0();
}

void loop() {

// blinky();
//  
//  digitalWrite(PIN1, HIGH);
//  delay(delayed);
//  digitalWrite(PIN1, LOW);
//
//  blinky();
//
//  digitalWrite(PIN2, HIGH);
//  delay(delayed);
//  digitalWrite(PIN2, LOW);
//
//  blinky();
//
//  digitalWrite(PIN3, HIGH);
//  delay(delayed);
//  digitalWrite(PIN3, LOW);
//
//  blinky();
//
//  digitalWrite(PIN4, HIGH);
//  delay(delayed);
//  digitalWrite(PIN4, LOW);
//
//  blinky();
//
//  digitalWrite(PIN5, HIGH);
//  delay(delayed);
//  digitalWrite(PIN5, LOW);
//
//  blinky();
//  
//  digitalWrite(PIN6, HIGH);
//  delay(delayed);
//  digitalWrite(PIN6, LOW);
//
//  blinky();
//  
//  digitalWrite(PIN7, HIGH);
//  delay(delayed);
//  digitalWrite(PIN7, LOW);
//  
  if (Serial.available())
  {
    // val = Serial.readString();
   
    
    // data = val.toInt();
  String data1 = Serial.readString();
  
  String text = Serial.readString();
    int data2 = data1.toInt();
    if (data2 < 0){
     // delay(3000);
    loop0();
    loop();
    }
    //delay(1000);
    //}
   

    int data = map(data2, 1, 700, 1, 7);
     Serial.println(data1);
    Serial.println(data);

    // Serial.println(data);
    // delay(1000);
    //loop0();
    switch (data)
    {
      case 1:
        {
          loop1();
          loopn(2);
          Serial.println("C:1");
          break;
        }

      case 2: {
          //second loop
          loop2();
          loopn(3);
           Serial.println("C:2");
          break;
        }
      case 3: {
          //third loop
          loop3();
          loopn(4);
           Serial.println("C:3");
          break;
        }
      case 4:
        //fourth loop
        loop4();
        loopn(5);
         Serial.println("C:4");
        break;
      //
      //
      case 5: {
          //fifth loop
          loop5();
          loopn(6);
           Serial.println("C:5");
          break;
        }//
      //
      case 6: {
          //sixth loop
          loop6();
          loopn(7);
           Serial.println("C:6");
          break;
        }
      //
      case 7:
        {
          loop7();
           Serial.println("C:1");
          break;
        }



      default:
      loop0();
        //delay(10);

        //


    }
  }
//  else
//  {
//    blinky();
//  }

}


void blinky()
{
    Serial.println("blink");
   digitalWrite(PIN1, HIGH);
  digitalWrite(PIN2, HIGH);
  digitalWrite(PIN3, HIGH);
  digitalWrite(PIN4, HIGH);
  digitalWrite(PIN5, HIGH);
  digitalWrite(PIN6, HIGH);
  digitalWrite(PIN7, HIGH);
  
  delay(delayed);
  
  digitalWrite(PIN1, LOW);
  digitalWrite(PIN2, LOW);
  digitalWrite(PIN3, LOW);
  digitalWrite(PIN4, LOW);
  digitalWrite(PIN5, LOW);
  digitalWrite(PIN6, LOW);
  digitalWrite(PIN7, LOW);
    delay(delayed);
  }














