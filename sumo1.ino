int l, m, r;

void setup() {
 pinMode(2, OUTPUT);
 pinMode(3, OUTPUT);
 pinMode(4, OUTPUT);
 pinMode(5, OUTPUT);
 Serial.begin(9600);
}

void forward() {
 digitalWrite(3,HIGH);
 digitalWrite(5,HIGH);
 digitalWrite(2,LOW);
 digitalWrite(4,LOW);
}
void backward() {
  digitalWrite(2,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(5,LOW);
}
void left() {
  digitalWrite(3,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(2,HIGH);
  digitalWrite(4, LOW);
}
void right() {
  digitalWrite(3,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(2,LOW);
  digitalWrite(4, HIGH);
}
void stop() {
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(5,LOW);
}


void loop() {
  l = analogRead(A0);
  m = analogRead(A1);
  r = analogRead(A2);
  Serial.print("L-");
  Serial.print(l);
  Serial.print(" ");
  Serial.print("M-");
  Serial.print(m);
  Serial.print(" ");
  Serial.print("R-");
  Serial.println(r);
  if (l>700 && m>700 && r>700) {
    forward();
    delay(1);
  } else {
    backward();
    delay(1000);
    left();
    delay(1000);
  }
}
