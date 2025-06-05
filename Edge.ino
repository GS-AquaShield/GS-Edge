#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Configura o LCD 16x2 no endereço I2C padrão 0x27
LiquidCrystal_I2C lcd(0x27, 16, 2);

// Pinos do sensor ultrassônico
const int trigPin = 9;
const int echoPin = 10;

// LED indicador
const int ledPin = 7;

// Altura total do reservatório (em cm)
const int alturaTotal = 30;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT);

  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Medindo...");
}

void loop() {
  // Disparo do pulso ultrassônico
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Leitura do tempo de retorno
  long duracao = pulseIn(echoPin, HIGH);
  float distancia = duracao * 0.034 / 2; // em cm

  // Cálculo do nível de água
  float nivel = alturaTotal - distancia;
  int percentual = (nivel / alturaTotal) * 100;

  // Mostrar no LCD
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Nivel: ");
  lcd.print(percentual);
  lcd.print("%");

  lcd.setCursor(0, 1);
  lcd.print("Dist: ");
  lcd.print(distancia, 1);
  lcd.print(" cm");

  // Controle do LED
  if (percentual < 20) {
    digitalWrite(ledPin, HIGH); // Nível baixo: LED acende
  } else {
    digitalWrite(ledPin, LOW);
  }

  delay(1000); // Espera 1 segundo para nova medição
}
