int pinI1=5;//定义I1接口
int pinI2=6;//定义I2接口
int pinI3=9;//定义I3接口
int pinI4=10;//定义I4接口
int ENA=3;
String inString = "";
double speeddata=0.0;
//int ENB=
void setup(){
Serial.begin(9600);
pinMode(pinI1,OUTPUT);
pinMode(pinI2,OUTPUT);
pinMode(pinI3,OUTPUT);
pinMode(pinI4,OUTPUT);
pinMode(ENA,OUTPUT);
//pinMode(ENB,OUTPUT);
analogWrite(ENA,0);
//analogWrite(ENB,0);
}
void loop(){
 while (Serial.available() > 0) {
    int inChar = Serial.read();
    if (isDigit(inChar)) {
      // convert the incoming byte to a char and add it to the string:
      inString += (char)inChar;
    }
    // if you get a newline, print the string, then the string's value:
    if (inChar == '\n') {
      Serial.print("Value:");
      Serial.println(inString.toInt());
      analogWrite(ENA,inString.toInt());
      digitalWrite(pinI4,LOW);//使直流电机（右）逆时针转
      digitalWrite(pinI3,HIGH);
      digitalWrite(pinI1,LOW);//使直流电机（左）顺时针转
      digitalWrite(pinI2,HIGH);
      delay(2000);
      // clear the string for new input:
      inString = "";
    }
  }

//后退
/*Serial.print("back");
digitalWrite(pinI4,HIGH);//使直流电机（右）顺时针转
digitalWrite(pinI3,LOW);
digitalWrite(pinI1,HIGH);//使直流电机（左）逆时针转
digitalWrite(pinI2,LOW);
delay(2000);//左转
Serial.print("left");
digitalWrite(pinI4,LOW);//使直流电机(右)逆时针转
digitalWrite(pinI3,HIGH);
digitalWrite(pinI1,HIGH);//使直流电机(左)逆时针转
digitalWrite(pinI2,LOW);
delay(2000);
//右转
Serial.print("right");
digitalWrite(pinI4,HIGH);//使直流电机(右)顺时针转
digitalWrite(pinI3,LOW);
digitalWrite(pinI1,LOW);//使直流电机(左)顺时针转
digitalWrite(pinI2,HIGH);
delay(2000);
//刹车
Serial.print("stop");
digitalWrite(pinI4,HIGH);//使直流电机(右)刹车
digitalWrite(pinI3,HIGH);
digitalWrite(pinI1,HIGH);//使直流电机左刹车
digitalWrite(pinI2,HIGH);
delay(2000);*/
}

