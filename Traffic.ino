int ledDelay = 10000;

int red = 10;

int yellow = 9;

int green = 8;

void setup() {

pinMode(red,OUTPUT);

pinMode(yellow,OUTPUT);

pinMode(green,OUTPUT);

}

void loop() {

digitalWrite(red,HIGH);

delay(ledDelay);

digitalWrite(yellow,HIGH);

delay(2000);

digitalWrite(green,HIGH);

digitalWrite(red,LOW);

digitalWrite(yellow,LOW);

delay(ledDelay);

digitalWrite(yellow,HIGH);

digitalWrite(green,LOW);

delay(2000);

digitalWrite(yellow,LOW);

}
