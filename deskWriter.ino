float timeCount = 0;
float timeCount1 = 0;
int speed = 500;
int voltagePin = A3;
byte idx;
byte colidx;
byte colsel [5] = {2,3,4,5,6};
byte rowsel [7] = {7,8,9,10,11,12,13};

byte HeartEMPTY[] = {0x00, 0x0a, 0x1f, 0x1f, 0x0e, 0x04, 0x00, 0x00};
byte HeartSOLID[] = {0xff, 0xf5, 0xe0, 0xe0, 0xf1, 0xfb, 0xff, 0xff};
byte smile[] = {0xff, 0xf5, 0xea, 0xff, 0xe4, 0xf1, 0xff, 0xff};
byte smile1[] = {0xff, 0xff, 0xe4, 0xff, 0xe4, 0xf1, 0xff, 0xff};

byte a[] = {0xf1, 0xee, 0xee, 0xee, 0xe0, 0xee, 0xee, 0xff};
byte t[] = {0xe0, 0xea, 0xfb, 0xfb, 0xfb, 0xfb, 0xf1, 0xff};
byte I[] = {0xe0, 0xfb, 0xfb, 0xfb, 0xfb, 0xfb, 0xe0, 0xff};
byte l[] = {0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xe0, 0xff};

byte s[] = {0xf1, 0xee, 0xfe, 0xf1, 0xef, 0xee, 0xf1, 0xff};
byte e[] = {0xe0, 0xfe, 0xfe, 0xf0, 0xfe, 0xfe, 0xe0, 0xff};
byte n[] = {0xee, 0xee, 0xec, 0xea, 0xe6, 0xee, 0xee, 0xff};
byte i[] = {0xfb, 0xff, 0xf1, 0xfb, 0xfb, 0xfb, 0xf1, 0xff};

byte v[] = {0xee, 0xee, 0xee, 0xf5, 0xf5, 0xf5, 0xfb, 0xff};
byte y[] = {0xee, 0xee, 0xf5, 0xfb, 0xfb, 0xfb, 0xfb, 0xff};
byte o[] = {0xf1, 0xee, 0xee, 0xee, 0xee, 0xee, 0xf1, 0xff};
byte r[] = {0xf0, 0xee, 0xee, 0xf0, 0xfa, 0xf6, 0xee, 0xff};
byte u[] = {0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xf1, 0xff};
byte m[] = {0xee, 0xe4, 0xe4, 0xea, 0xea, 0xee, 0xee, 0xff};

byte clr[] = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff};
      
void setup(){
  
pinMode(voltagePin, OUTPUT);
analogWrite(voltagePin,1024);
analogWrite(A4,100);
Serial.begin(9600);
  for (idx=2; idx < 7; idx++) // prep COLs
  {
    pinMode (idx,OUTPUT);
    digitalWrite (idx,LOW);  // COL off
  }
  for (idx=7; idx < 14; idx++) // prep ROWs
  {
    pinMode (idx,OUTPUT);
    digitalWrite (idx,HIGH);  // ROW off
  }
}



void loop(){

if (analogRead(A4)>400) {
  iLoveYou(); 
}

if (analogRead(A4)<250) {
  happyNewYear();
}

Serial.println(analogRead(A4));
}

void emojis() {
delay(2);
timeCount1 += 1;

if(timeCount1 <  100) {
drawScreen(HeartEMPTY);
} 

else if (timeCount1 <  300) {
drawScreen(HeartSOLID);
} 

else if (timeCount1 <  400) {
drawScreen(smile);
}

else if (timeCount1 <  500) {
drawScreen(smile1);
}

else if (timeCount1 <  650) {
drawScreen(smile);
}

else if (timeCount1 <  750) {
drawScreen(smile1);
}

else if (timeCount1 <  850) {
drawScreen(smile);
}

else if (timeCount1 <  800) {
drawScreen(smile1);
}

else {
  timeCount1 = 0;
  timeCount = 0;

  }
}

void iLoveYou() {
  delay(2);
timeCount += 1;

if(timeCount <  100) {
drawScreen(HeartEMPTY);
} 

else if (timeCount <  300) {
drawScreen(HeartSOLID);
} 

else if (timeCount <  400) {
drawScreen(s);
}

else if (timeCount <  500) {
drawScreen(e);
}

else if (timeCount <  600) {
drawScreen(n);
}

else if (timeCount <  800) {
drawScreen(i);
}



else if (timeCount <  900) {
drawScreen(s);
}

else if (timeCount <  1000) {
drawScreen(e);
}

else if (timeCount <  1100) {
drawScreen(v);
}

else if (timeCount <  1200) {
drawScreen(i);
}

else if (timeCount <  1300) {
drawScreen(y);
}

else if (timeCount <  1400) {
drawScreen(o);
}

else if (timeCount <  1500) {
drawScreen(r);
}

else if (timeCount <  1600) {
drawScreen(u);
}

else if (timeCount <  1700) {
drawScreen(m);
}

else if(timeCount <  1800) {
drawScreen(HeartSOLID);
} 

else if (timeCount <  2000) {
drawScreen(HeartEMPTY);
} 
else if (timeCount <  2100) {
drawScreen(clr);
}

else {
// back to the start
timeCount = 0;
}
}

void happyNewYear() {
  delay(2);
timeCount += 1;

if(timeCount <  100) {
drawScreen(m);
} 

else if (timeCount <  200) {
drawScreen(u);
} 

else if (timeCount <  300) {
drawScreen(t);
}

else if (timeCount <  400) {
drawScreen(l);
}

else if (timeCount <  600) {
drawScreen(u);
}


else if (timeCount <  700) {
drawScreen(y);
}

else if (timeCount <  800) {
drawScreen(I);
}

else if (timeCount <  900) {
drawScreen(l);
}

else if (timeCount <  950) {
drawScreen(clr);
}

else if (timeCount <  1000) {
drawScreen(l);
}

else if (timeCount <  1100) {
drawScreen(a);
}

else if (timeCount <  1200) {
drawScreen(r);
}

else if (timeCount <  1300) {
drawScreen(smile);
}

else if (timeCount <  1400) {
drawScreen(smile1);
}

else if (timeCount <  1650) {
drawScreen(smile);
}

else if (timeCount <  1750) {
drawScreen(smile1);
}

else {
// back to the start
emojis();
}
}

void drawScreen(byte buffer2[])
 { 
   // Turn on each row in series
    for (int i=0; i<7; i++)        // count next row
     {
        digitalWrite(rowsel[i], HIGH);    //initiate whole row
        for (int a = 0; a < 5; a++)    // count next row
        {
          // if You set (~buffer2[i] >> a) then You will have positive
          digitalWrite(colsel[a], (buffer2[i] >> a) & 0x01); // initiate whole column
          
          delayMicroseconds(100);       // uncoment deley for diferent speed of display
          //delayMicroseconds(1000);
          //delay(10);
          //delay(100);
          
          digitalWrite(colsel[a], 1);      // reset whole column
        }
        digitalWrite(rowsel[i], LOW);     // reset whole row
        // otherwise last row will intersect with next row
    }
}
