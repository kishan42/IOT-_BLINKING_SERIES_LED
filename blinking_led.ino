void setup() {
    pinMode(13,OUTPUT);
}

void loop() {
    digitalWrite(13,HIGH); //HIGH = ON
    delay(500);
    digitalWrite(13,LOW); //LOW = OFF
    delay(300);
}
