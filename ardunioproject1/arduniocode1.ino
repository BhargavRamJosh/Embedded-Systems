int ep = 6;
int tp = 7;
int dist;
 int time;

void setup() {
  Serial.begin(9600);
  pinMode(ep, INPUT);
  pinMode(tp, OUTPUT);
}

void loop() {
  digitalWrite(tp, LOW);
  delayMicroseconds(2);
  digitalWrite(tp, HIGH);
  delayMicroseconds(10);
  digitalWrite(tp, LOW);
  
  time = pulseIn(ep, HIGH);
  dist = time * 0.034 / 2;
  
  Serial.println(dist);
  delay(1000);
}

