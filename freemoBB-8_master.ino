#include <SoftwareSerial.h>
#include <Servo.h>

Servo servo1; //Servoオブジェクトを作成
Servo servo2; //Servoオブジェクトを作成
Servo servo3; //Servoオブジェクトを作成

Servo servo4; //Servoオブジェクトを作成★

void setup(){
    Serial.begin (9600);

  servo1.attach(7); //D7ピンをサーボの信号線として設定
  servo2.attach(6); //D6ピンをサーボの信号線として設定
  pinMode(5, OUTPUT);    // LED出力に設定
  servo3.attach(3); //D4ピンをサーボの信号線として設定
  servo4.attach(9); //D4ピンをサーボの信号線として設定★

  pinMode(13, OUTPUT);    // LED出力に設定
  pinMode(8, OUTPUT);    // LED出力に設定      
  pinMode(2, OUTPUT);    // LED出力に設定      

  
}

void loop(){

  int inputchar;
  // シリアルポートより1文字読み込む
  inputchar = Serial.read();
 
  if(inputchar != -1 ){
    // 読み込んだデータが -1 以外の場合　以下の処理を行う 
    switch(inputchar){
      case 's':
        // 読み込みデータが　s の場合
Serial.print("TU");
Serial.end();

       servo4.write(60);
                delay(300);
             
    servo1.write(0); 
                delay(300);
        servo2.write(40); 
          digitalWrite(5, HIGH);
     
        delay(80);
          digitalWrite(13, HIGH);
          delay(500);
          digitalWrite(13, LOW);        

       servo3.write(20);
                delay(100);
       servo3.write(00);

                delay(300);
       servo4.write(00);
                delay(300);
                        
        delay(800);        
        
        servo2.write(100);
          digitalWrite(5, LOW);
        delay(300);
       servo1.write(100);
                delay(30);
       servo3.write(40);
                delay(200);
       servo3.write(00);
                delay(300);

       servo4.write(60);
                delay(800);
       servo4.write(00);
                delay(3000);

   Serial.begin (9600);
                               
       break;
            


              // 読み込みデータが　q の場合
      case 'q': 
      Serial.end();
       servo4.write(60);
                delay(300);
       servo4.write(00);
                delay(300);

          digitalWrite(2, HIGH);
          delay(1500);
          digitalWrite(2, LOW);      


       servo3.write(90);
                delay(600);
       servo3.write(00);
                delay(300);


       servo4.write(60);
                delay(1000);
       servo4.write(00);
                delay(300);
                 Serial.begin (9600);

        //digitalWrite(13, LOW);
       // servo.write(90);
        break;

              
              // 読み込みデータが　w の場合
      case 'w': 
Serial.end();
       servo4.write(60);
                delay(300);
       servo4.write(00);
                delay(300);

      
          digitalWrite(8, HIGH);
          delay(500);
          digitalWrite(8, LOW);  

       servo3.write(60);
                delay(100);
       servo3.write(20);
                delay(100); 
          
       servo4.write(60);
                delay(700);
       servo4.write(00);
                delay(300);
                      
      
       servo3.write(60);
                delay(100);
       servo3.write(20);
                delay(100);       
       servo3.write(60);
                delay(100);

       servo4.write(60);
                delay(700);
       servo4.write(00);
                delay(300);

       
       servo3.write(20);
       delay(2500);
       servo3.write(60);
       delay(2500);
       servo3.write(0);
   Serial.begin (9600);
       
        break;        

        
    }
  }
  else {
    // 読み込むデータが無い場合は何もしない
  }
}
