int SensorChama = 2;
int Buzzer = 10;
int Chama = LOW;

void setup() {
 Serial.begin(9600);

 pinMode(SensorChama, INPUT);
 pinMode(Buzzer, OUTPUT);
 
}

void loop() {
  //Detectando Fogo:
  if (digitalRead(SensorChama) == Chama){
    tone(Buzzer,1500);
    delay(400);
  }
  
  //Sem Fogo:
  else{
    noTone(Buzzer);
    delay(400);
  }
}
