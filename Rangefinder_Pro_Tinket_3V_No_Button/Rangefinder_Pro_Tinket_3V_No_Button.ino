const int anPin = 0;
const int vibPin = 11; //motor
const int potPin = 1;

long anVolt, mm, inches;
int potVal = 0;
int vibVal = 0; //motor
int previousData;
int currentData;

void setup() {
  pinMode(vibPin, OUTPUT);
  pinMode(potPin, INPUT);
}

void read_sensor(){
  anVolt = analogRead(anPin);
  mm = anVolt * 5;
}

void read_potVal(){
  potVal = analogRead(potPin); 
}

void loop() {
  read_sensor();
  read_potVal();
      if (potVal > 0 && potVal < 204) {
          if (mm > 900 && mm < 1100) {
            digitalWrite(vibPin, HIGH);
          } else {
            digitalWrite(vibPin, LOW);
          }
      } else
      if (potVal > 205 && potVal < 409) {
          if (mm > 1400 && mm < 1600) {
            digitalWrite(vibPin, HIGH);
          } else {
            digitalWrite(vibPin, LOW);
          }
      } else
      if (potVal > 410 && potVal < 614) {
          if (mm > 1900 && mm < 2100) {
            digitalWrite(vibPin, HIGH);
          } else {
            digitalWrite(vibPin, LOW);
          }
      } else
      if (potVal > 615 && potVal < 819) {
          if (mm > 2900 && mm < 3100) {
            digitalWrite(vibPin, HIGH);
          } else {
            digitalWrite(vibPin, LOW);
          }
      } else
      if (potVal > 820 && potVal < 1023) {
          if (mm > 4800) {
            digitalWrite(vibPin, HIGH);
          } else {
            digitalWrite(vibPin, LOW);
          }        
  }
}
