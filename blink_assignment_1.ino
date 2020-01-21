void setup() {
 /* Blink assignment written by Risha Nadarajah on January 21, 2020
 3 different blinking lights*/
 pinMode(13, OUTPUT);
 pinMode(12, OUTPUT);
 pinMode(8, OUTPUT);
}

void loop() {
   digitalWrite(13, HIGH); // turn the red LED on
   delay(1000); // wait for a second
   digitalWrite(12, HIGH); // turn the blue LED on
   delay(2000); // wait for 2 seconds
   digitalWrite(8, HIGH); // turn the green LED on
   delay(3000); // wait for 3 seconds
   digitalWrite(13, LOW);
   delay(1000); // wait for a second
   digitalWrite(12, LOW);
   delay(2000); // wait for 2 seconds                                                               ); // wait for a second
   digitalWrite(8, LOW);
   delay(3000); // wait for 3 seconds
}
