const int inputPin = 2;
const int led Pin = 12;

int value = 0;

void setup () {
  Serial.begin(9600);
  pinMode(inputPin, INPUT);
  // pinMode(ledPin, OUTPUT);
}

void loop(){
  value = digitalRead(inputPin); //lectura digital del pin
  // Serial.println(value);
  // mandar mensaje a puerto serie en funcion del valor leido
  if (value ==1) {
    Serial.println("Encendido");
    //digitalWrite(ledPin, HIGH);
  }
  else {
    Serial.println("Apagado");
    // digitalWrite(ledPin, LOW);
  }
  delay(1);
  //digitalWrite(ledPin, LOW);
} 
