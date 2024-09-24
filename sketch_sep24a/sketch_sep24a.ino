#include <Servo.h> 

Servo s1;
Servo s2;
Servo s3;
Servo s4;
Servo s5;

char data_in;

void setup() {
  s1.attach(3);
  s2.attach(4);
  s3.attach(5);
  s4.attach(6);
  s5.attach(7);

  Serial.begin(9600);
  Serial.println("Bluetooth servo control system ready. Send a number between 0 and 5 to control the servos.");
}

void loop() {
  if (Serial.available()) {
    data_in = Serial.read();  

    Serial.print("Received command: ");
    Serial.println(data_in);

    switch (data_in) {
      case '1':
        Serial.println("Moving servos to position 1 (open)");
        s1.write(160);
        s2.write(0);
        s3.write(150);
        s4.write(0);
        s5.write(125);
        break;

      case '2':
        Serial.println("Moving servos to position 2 (partially open)");
        s1.write(160);
        s2.write(130);
        s3.write(150);
        s4.write(0);
        s5.write(125);
        break;

      case '3':
        Serial.println("Moving servos to position 3 (partially open)");
        s1.write(160);
        s2.write(130);
        s3.write(0);
        s4.write(0);
        s5.write(125);
        break;

      case '4':
        Serial.println("Moving servos to position 4 (closed)");
        s1.write(160);
        s2.write(130);
        s3.write(0);
        s4.write(130);
        s5.write(125);
        break;

      case '5':
        Serial.println("Moving servos to position 5 (fully closed)");
        s1.write(160);
        s2.write(130);
        s3.write(0);
        s4.write(130);
        s5.write(0);
        break;

      case '0':
        Serial.println("Moving servos to position 0 (rest)");
        s1.write(20);
        s2.write(0);
        s3.write(150);
        s4.write(0);
        s5.write(125);
        break;

      case 'f':
        Serial.println("Moving servos to position 0 (rest)");
        s1.write(20);
        s2.write(130);
        s3.write(130);
        s4.write(0);
        s5.write(125);
        break;

      case 'c':
        Serial.println("Moving servos to position 0 (rest)");
        s1.write(160);
        s2.write(0);
        s3.write(150);
        s4.write(130);
        s5.write(125);
        break;

      case 'd':
        Serial.println("Moving servos to position 0 (rest)");
        s1.write(20);
        s2.write(0);
        s3.write(150);
        s4.write(0);
        s5.write(0);
        break;

      default:
        Serial.println("Invalid command. Send a number between 0 and 5.");
    }

    delay(200);
  }
}
