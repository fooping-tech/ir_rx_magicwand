#include <M5Atom.h>

//IR
#define IR_TX_PIN 22
#define IR_RX_PIN 19

void IR_init(){
  Serial2.begin(2400, SERIAL_8N1,IR_RX_PIN,IR_TX_PIN);
  Serial.println("IR init.");
}

void setup() {
  // put your setup code here, to run once:
  M5.begin(false,false,false);
  Serial.begin(9600);
  //ir_init
  IR_init();
}

void loop() {
  // put your main code here, to run repeatedly:
  M5.update();

  char inputchar='0';
  
  if(Serial2.available() > 0) {
    inputchar = Serial2.read();  // 1文字読み取り
    Serial.println(inputchar);
  }

  if(inputchar == '1'){
    //ここに1入力時の処理を書く
    Serial.println("1 signal recieved!");
 }

  if(inputchar == '2'){
    //ここに2入力時の処理を書く
    Serial.println("2 signal recieved!");
  }

  if(inputchar == '3'){
    //ここに3入力時の処理を書く
    Serial.println("3 signal recieved!");
  }
  
  
}