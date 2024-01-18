int su = 9;
int giu = 8;
int mot1 = 2;
int mot2= 3;

void setup() {
  pinMode(su, INPUT_PULLUP);
  pinMode(giu, INPUT_PULLUP);
  pinMode(mot1, OUTPUT);
  pinMode(mot2, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  // if(digitalRead(su) != digitalRead(giu))
  if(digitalRead(su)==LOW && digitalRead(giu)==HIGH){
    digitalWrite(mot1, HIGH);
  }else{
    digitalWrite(mot1, LOW);
  }

  if(digitalRead(giu)==LOW && digitalRead(su)==HIGH){
    Serial.println("pressed");
    digitalWrite(mot2, HIGH);
  }else{
    digitalWrite(mot2, LOW);
  }
  // Serial.println(digitalRead(su));
  
  /*loop(su==HIGH && giu==LOW){
   Serial.println("hello");
   delay(1000);
   Serial.println("hello");
  }
  loop(su==LOW && giu==HIGH){
    Serial.println("hello");
    delay(1000);
    Serial.println("hello");
  }
  
  
  */
}
