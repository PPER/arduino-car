#include "VarSpeedServo.h"
VarSpeedServo dabi;//此处定义四个舵机
VarSpeedServo xiaobi;
VarSpeedServo zhua;
//VarSpeedServo servo4;
void setup()
{
  Serial.begin(9600);
 xiaobi.attach(4);
  zhua.attach(5);
  dabi.attach(3);
 // servo3.attach(9);
  //servo4.attach(6);

  dabi.write(20);//dabi done50
  zhua.write(50);//50
  xiaobi.write(50);//dizuo done 110
  

  Serial.begin(9600);
}
void fandao(){
  
  }
  //xiaobi zhongjian
void armwajue(){
  zhua.write(100);
  delay(1500);
    xiaobi.write(170);Serial.print("2");
    delay(1500);
  zhua.write(50); Serial.print("3");
   delay(1000);
    xiaobi.write(110); Serial.print("4");
   delay(2000);
  }
 void ()
void loop(){  
   /* zhua.write(120);
   Serial.print("1\n");
   delay(1000);
   zhua.write(50);
   Serial.print("2\n");
   delay(1000);*/
  // armwajue();
   
  //zhua.write(50);

  }


