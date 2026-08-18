const int BUTTON1 = 2;
const int BUTTON2 = 3;
const int RED_LED = 4;
const int BLUE_LED = 12;
const int BUZZER = 13;

//you cah change for more if want
const int MAX_SEQUENCE = 50;

int sequence[MAX_SEQUENCE];
int sequenceLength = 1;

void setup() {
  pinMode(BUTTON1, INPUT_PULLUP);
  pinMode(BUTTON2, INPUT_PULLUP);

  pinMode(RED_LED, OUTPUT);
  pinMode(BLUE_LED, OUTPUT);

  pinMode(BUZZER, OUTPUT);

  randomSeed(analogRead(A0));

  // sound for startup
  tone(BUZZER, 600, 100);
  delay(150);
  tone(BUZZER, 900, 100);
  delay(300);

  sequence[0] = random(0, 2);

  showSequence();
}

void loop(){
  
}

void showSequence() {
  delay(500);
  for (int i = 0; i < sequenceLength; i++) {

    playMove(sequence[i]);

    delay(250);
  }
}

void playMove(int move) {

  if (move == 0) {

    // red  led
    digitalWrite(RED_LED, HIGH);
    tone(BUZZER, 500);

    delay(250);

    digitalWrite(RED_LED, LOW);
    noTone(BUZZER);

  } else {

    // blue led
    digitalWrite(BLUE_LED, HIGH);
    tone(BUZZER, 900);

    delay(250);

    digitalWrite(BLUE_LED, LOW);
    noTone(BUZZER);
  }

  delay(100);
}
