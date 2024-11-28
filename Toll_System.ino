#include <SPI.h>
#include <MFRC522.h>
#define SS_PIN 10
#define RST_PIN 9
byte readCard[4];
String MasterTag = "93D78A3F";
String stolen="A3D936DA";
String tagID = "";
MFRC522 mfrc522(SS_PIN, RST_PIN);
void setup() 
{pinMode(3,OUTPUT);
pinMode(2,INPUT);
pinMode(4,OUTPUT);
pinMode(6,OUTPUT);
pinMode(2,OUTPUT);
pinMode(7,INPUT);
  Serial.begin(9600);
  SPI.begin();
  mfrc522.PCD_Init();
  delay(4);
  mfrc522.PCD_DumpVersionToSerial();
  Serial.println("--------------------------");
  Serial.println(" Access Control ");
  Serial.println("Scan Your Card>>");
}
void pri(){
  Serial.println("Past Cars are: ");
}
void loop() 
{digitalWrite(3,HIGH);
if(digitalRead(2)==HIGH){
  pri();
}
  while (getID()) {
    digitalWrite(3,LOW);
    if (tagID == MasterTag){
      digitalWrite(4,HIGH);
      Serial.println(" Access Granted!");
      Serial.println("--------------------------");
    }
    else if(stolen==tagID){
       digitalWrite(2,HIGH);
       tone(6,1000);
       Serial.println(" !!! Stolen Car Detected");
      Serial.println("--------------------------");
    }
    else{
      digitalWrite(2,HIGH);
      Serial.println(" Access Denied!");
      Serial.println("--------------------------");
    }
    delay(1000);
    noTone(6);
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);

    Serial.println(" Access Control ");
    Serial.println("Scan Your Card>>");
  }
}
boolean getID() 
{
  if ( ! mfrc522.PICC_IsNewCardPresent()) {
    return false;
  }
  if ( ! mfrc522.PICC_ReadCardSerial()) {
  return false;
  }
  tagID = "";
  for ( uint8_t i = 0; i < 4; i++) {
  tagID.concat(String(mfrc522.uid.uidByte[i], HEX));
  }
  tagID.toUpperCase();
  mfrc522.PICC_HaltA(); 
  return true;
}