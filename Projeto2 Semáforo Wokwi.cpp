int esquerdaVermelho = 12;
int esquerdaAmarelo = 14;
int esquerdaVerde = 27;

int baixoVermelho = 26;
int baixoAmarelo = 25;
int baixoVerde = 33;

int direitaVermelho = 2;
int direitaAmarelo = 4;
int direitaVerde = 5;

int cimaVermelho = 18;
int cimaAmarelo = 19;
int cimaVerde = 21;

int ldr = 15;
int switchButton = 32;


void setup() {
  
Serial.begin(115200);
pinMode(ldr, INPUT);
pinMode(switchButton, INPUT);

pinMode(esquerdaVermelho, OUTPUT);
pinMode(esquerdaAmarelo, OUTPUT);
pinMode(esquerdaVerde, OUTPUT);

pinMode(direitaVermelho, OUTPUT);
pinMode(direitaAmarelo, OUTPUT);
pinMode(direitaVerde, OUTPUT);

pinMode(cimaVermelho, OUTPUT);
pinMode(cimaAmarelo, OUTPUT);
pinMode(cimaVerde, OUTPUT);

pinMode(baixoVermelho, OUTPUT);
pinMode(baixoAmarelo, OUTPUT);
pinMode(baixoVerde, OUTPUT);
}

void loop() {

Serial.println("Valor LDR =");
Serial.println(analogRead(ldr));
Serial.println("Está chovendo? 1:sim, 0:não");
Serial.println(digitalRead(switchButton));

digitalWrite(direitaVermelho, LOW);
digitalWrite(esquerdaVermelho, LOW);
digitalWrite(cimaAmarelo, LOW);
digitalWrite(baixoAmarelo, LOW);
digitalWrite(direitaVerde, HIGH);
digitalWrite(esquerdaVerde, HIGH);
digitalWrite(cimaVermelho, HIGH);
digitalWrite(baixoVermelho, HIGH);

if (analogRead(ldr) >= 680 && digitalRead(switchButton) == HIGH) {
  Serial.println("Chuva, ciclo de 8 segundos");
  delay(1000);
  Serial.println("1");
  delay(1000);
  Serial.println("2");
  delay(1000);
  Serial.println("3");
  delay(1000);
  Serial.println("4");
  delay(1000);
  Serial.println("5");
  delay(1000);
  Serial.println("6");
  delay(1000);
  Serial.println("7");
  delay(1000);
  Serial.println("8");
}
else {
  Serial.println("Ensolarado, ciclo de 4 segundos");
  delay(1000);
  Serial.println("1");
  delay(1000);
  Serial.println("2");
  delay(1000);
  Serial.println("3");
  delay(1000);
  Serial.println("4");
}
  
digitalWrite(direitaVerde, LOW);
digitalWrite(esquerdaVerde, LOW);
digitalWrite(direitaAmarelo, HIGH);
digitalWrite(esquerdaAmarelo, HIGH);
Serial.println("Amarelo: 1 segundo");
delay(1000);

Serial.println("Valor LDR =");
Serial.println(analogRead(ldr));
Serial.println("Está chovendo? 1:sim, 0:não");
Serial.println(digitalRead(switchButton));

digitalWrite(direitaAmarelo, LOW);
digitalWrite(esquerdaAmarelo, LOW);
digitalWrite(direitaVermelho, HIGH);
digitalWrite(esquerdaVermelho, HIGH);
digitalWrite(cimaVerde, HIGH);
digitalWrite(baixoVerde, HIGH);
digitalWrite(cimaVermelho, LOW);
digitalWrite(baixoVermelho, LOW);

if (analogRead(ldr) >= 680 && digitalRead(switchButton) == HIGH) {
  Serial.println("Chuva, ciclo de 8 segundos");
  delay(1000);
  Serial.println("1");
  delay(1000);
  Serial.println("2");
  delay(1000);
  Serial.println("3");
  delay(1000);
  Serial.println("4");
  delay(1000);
  Serial.println("5");
  delay(1000);
  Serial.println("6");
  delay(1000);
  Serial.println("7");
  delay(1000);
  Serial.println("8");
}
else {
  Serial.println("Ensolarado, ciclo de 4 segundos");
  delay(1000);
  Serial.println("1");
  delay(1000);
  Serial.println("2");
  delay(1000);
  Serial.println("3");
  delay(1000);
  Serial.println("4");
}

Serial.println("Amarelo: 1 segundo");
digitalWrite(cimaVerde, LOW);
digitalWrite(baixoVerde, LOW);
digitalWrite(cimaAmarelo, HIGH);
digitalWrite(baixoAmarelo, HIGH);
delay(1000);
}