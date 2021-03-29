#define pot A1
#define motor 5
#define led 12

void setup(){
  
Serial.begin(9600);
  pinMode(motor, OUTPUT);
pinMode(led,OUTPUT);
}


void loop()
{
  int deger=analogRead(pot);
  deger=map(deger,0,1023,0,255);
  int hiz=map(deger,0,255,0,120);
  if(deger>180){
  digitalWrite(12, HIGH);
    Serial.print("hizDegeri:");
    Serial.print(hiz);
    Serial.println("yavas");
   
  }
  else{
    digitalWrite(12, LOW);
  }  
}