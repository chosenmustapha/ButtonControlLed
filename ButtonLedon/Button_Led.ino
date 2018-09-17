int swButton = 8;
int ledPin = 13;

void setup () {

  pinMode(swButton, INPUT);
  pinMode(ledPin, OUTPUT);

}

void loop() {


  if (digitalRead(swButton) == HIGH) {


    digitalWrite(ledPin, HIGH);


  }

  else {

    digitalWrite(ledPin, LOW);

  }

}
