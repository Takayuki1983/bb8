#include <SoftwareSerial.h>
#include <DFPlayer_Mini_Mp3.h>


void setup() {

    Serial.begin (9600);
    mp3_set_serial (Serial);      //set Serial for DFPlayer-mini mp3 module 
    delay(1);                     // delay 1ms to set volume
    mp3_set_volume (5);          // value 0~30
  
     pinMode(2,INPUT) ;    //スイッチに接続ピンをデジタル入力に設定
     pinMode(8,INPUT) ;    //スイッチに接続ピンをデジタル入力に設定
     pinMode(7,INPUT) ;    //スイッチに接続ピンをデジタル入力に設定    

}
void loop() {
//スイッチ２　0001.mp3をプレイ
     if (digitalRead(2) == HIGH) {     //2スイッチの状態を調べる
     mp3_play (1); 
                delay(3000);
     } 
//スイッチ２　0001.mp3をプレイ
//スイッチ３　0002.mp3をプレイ
     if (digitalRead(8) == HIGH) {     //8スイッチの状態を調べる
     mp3_play (2); 
                delay(3000);
     } 
//スイッチ３　0002.mp3をプレイ
//スイッチ４　0005.mp3をプレイ
     if (digitalRead(7) == HIGH) {     //7スイッチの状態を調べる
     mp3_play (5); 
                delay(6000);
     } 
//スイッチ４　0005.mp3をプレイ

}
