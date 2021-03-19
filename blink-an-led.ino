int led = D7;
int unitLength = 200;


void setup() {

    pinMode(led, OUTPUT);

}

void dash() {
    digitalWrite(led, HIGH);

    delay(unitLength*3);

    digitalWrite(led, LOW);

    delay(unitLength);
}

void dot() {
    digitalWrite(led, HIGH);

    delay(unitLength);

    digitalWrite(led, LOW);

    delay(unitLength);
}

void letterBreak() {
    delay(unitLength*3);
}

void wordBreak() {
    delay(unitLength*7);
}

void loop() {
    dot();
    dot();
    dot();
    letterBreak();
    dot();
    dot();
    dot();
    dot();
    letterBreak();
    dot();
    dash();
    letterBreak();
    dash();
    dot();
    letterBreak();
    dot();
    dash();
    letterBreak();
    dot();
    dot();
    dot();
    dot();
    letterBreak();
    dot();
    dash();
    letterBreak();
    dash();
    dot();
}

