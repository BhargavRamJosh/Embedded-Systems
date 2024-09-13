Code Explanation:



Global Variables:
int ep = 6; and int tp = 7; — These variables define the pins connected to the ultrasonic sensor's echo pin (ep) and trigger pin (tp).
int dist; — Holds the calculated distance in centimeters.
int time; — Stores the time it takes for the echo signal to return after the ultrasonic wave is emitted.
setup() Function:

Serial.begin(9600); — Initializes the serial communication at 9600 baud rate. This allows data (like distance) to be printed in the Serial Monitor.
pinMode(ep, INPUT); — Sets the echo pin (ep) as an input, since it will receive data.
pinMode(tp, OUTPUT); — Sets the trigger pin (tp) as an output, since it will send out the sound waves.
loop() Function:

digitalWrite(tp, LOW); — Sets the trigger pin to LOW for 2 microseconds to ensure there's no residual signal.
digitalWrite(tp, HIGH); — Sends a 10-microsecond pulse to the trigger pin, which emits an ultrasonic wave.
digitalWrite(tp, LOW); — Stops the pulse after 10 microseconds.
time = pulseIn(ep, HIGH); — Measures the time (in microseconds) it takes for the echo pin to go HIGH after detecting the sound wave bouncing back.
dist = time * 0.034 / 2; — Calculates the distance in centimeters. The speed of sound is 0.034 cm/µs, and the time is divided by 2 because the wave travels to the object and back.
Serial.println(dist); — Prints the distance to the Serial Monitor.
delay(1000); — Pauses for 1 second before repeating the process.



Uses of the Code:

Distance Measurement: This code can be used to measure the distance to an object within a range of an ultrasonic sensor.

Obstacle Detection: Useful in projects like obstacle-avoiding robots, where detecting nearby objects is essential.

Level Monitoring: The code can be used in tanks or containers to measure the level of liquid or other materials by checking the distance from the sensor to the top of the material.

Security Systems: Ultrasonic sensors can be used to detect motion or intruders.
