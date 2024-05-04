#define dp 4  // Dot
#define a 8   // Top
#define b 9   // Right top
#define c 5   // Right bottom
#define d 6   // Bottom
#define e 7   // Left bottom
#define f 2   // Left top
#define g 3   // Middle

// Note: Katode seven segment!!!

void zero() {

  digitalWrite(dp, LOW);
  delay(500);

  digitalWrite(dp, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);

  delay(500);
}

void one() {

  digitalWrite(dp, LOW);
  delay(500);

  digitalWrite(dp, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);

  delay(500);
}

void two() {

  digitalWrite(dp, LOW);
  delay(500);

  digitalWrite(dp, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);

  delay(500);
}

void three() {

  digitalWrite(dp, LOW);
  delay(500);

  digitalWrite(dp, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, HIGH);
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);

  delay(500);
}

void four() {

  digitalWrite(dp, LOW);
  delay(500);

  digitalWrite(dp, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);

  delay(500);
}

void five() {

  digitalWrite(dp, LOW);
  delay(500);

  digitalWrite(dp, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, HIGH);
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);

  delay(500);
}

void six() {

  digitalWrite(dp, LOW);
  delay(500);

  digitalWrite(dp, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);

  delay(500);
}

void seven() {

  digitalWrite(dp, LOW);
  delay(500);

  digitalWrite(dp, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);

  delay(500);
}

void eight() {

  digitalWrite(dp, LOW);
  delay(500);

  digitalWrite(dp, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);

  delay(500);
}

void nine() {

  digitalWrite(dp, LOW);
  delay(500);

  digitalWrite(dp, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, HIGH);
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);

  delay(500);
}

void ten() {

  digitalWrite(dp, LOW);
  delay(500);

  digitalWrite(dp, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);

  delay(500);
}

void eleven() {

  digitalWrite(dp, LOW);
  delay(500);

  digitalWrite(dp, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);

  delay(500);
}

void twelve() {

  digitalWrite(dp, LOW);
  delay(500);

  digitalWrite(dp, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);

  delay(500);
}

void thirteen() {

  digitalWrite(dp, LOW);
  delay(500);

  digitalWrite(dp, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);

  delay(500);
}

void fourteen() {

  digitalWrite(dp, LOW);
  delay(500);

  digitalWrite(dp, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);

  delay(500);
}

void fifteen() {

  digitalWrite(dp, LOW);
  delay(500);

  digitalWrite(dp, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);

  delay(500);
}

void setup() {

  pinMode(dp, OUTPUT);
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
}

void loop() {

  zero();
  one();
  two();
  three();
  four();
  five();
  six();
  seven();
  eight();
  nine();
  ten();
  eleven();
  twelve();
  thirteen();
  fourteen();
  fifteen();
}

