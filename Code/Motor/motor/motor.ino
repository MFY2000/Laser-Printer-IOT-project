//// DIR = HIGH ----> HEADING RIGHT
//// DIR = LOW  ----> HEADING LEFT
//// 200 steps = one turn
//
//const int stepPin = 13; //connected to STEP on the A4988
////const int dirPin = 12; //connected to DIR on the A4988
// 
//void setup() {
//  pinMode(stepPin,OUTPUT); 
////  pinMode(dirPin,OUTPUT);
//}
//void loop() {
//
////  delay(1000);
////  digitalWrite(dirPin,HIGH);          // HIGH and LOW set the direction forward or backwards
////  for(int x = 0; x < 100; x++) {      // 100 steps forward (half a turn)
////    digitalWrite(stepPin,HIGH);       // one pulse (HIGH for 5 ms)5555
////  }
////  
////  delay(2000);
////  
//// digitalWrite(dirPin,HIGH);           //Pattern with a short segment back and forth
////  for(int x = 0; x < 10; x++) {
////    digitalWrite(stepPin,HIGH); 
////    delay(10); 
////    digitalWrite(stepPin,LOW); 
////    delay(10);    }
//// digitalWrite(dirPin,LOW);
////  for(int x = 0; x < 10; x++) {
////    digitalWrite(stepPin,HIGH); 
////    delay(10); 
////    digitalWrite(stepPin,LOW); 
////    delay(10);    }
////   digitalWrite(dirPin,HIGH);
////  for(int x = 0; x < 10; x++) {
////    digitalWrite(stepPin,HIGH); 
////    delay(10); 
////    digitalWrite(stepPin,LOW); 
////    delay(10);    }
//// digitalWrite(dirPin,LOW);
////   for(int x = 0; x < 10; x++) {
////    digitalWrite(stepPin,HIGH); 
////    delay(10); 
////    digitalWrite(stepPin,LOW); 
////    delay(10);    }
////
////     delay(2000);
////     
//// digitalWrite(dirPin,HIGH);             // Same as before, but faster
////  for(int x = 0; x < 15; x++) {
////    digitalWrite(stepPin,HIGH); 
////    delayMicroseconds(5000); 
////    digitalWrite(stepPin,LOW); 
////    delayMicroseconds(5000);   }
//// digitalWrite(dirPin,LOW);
////  for(int x = 0; x < 15; x++) {
////    digitalWrite(stepPin,HIGH); 
////    delayMicroseconds(5000); 
////    digitalWrite(stepPin,LOW); 
////    delayMicroseconds(5000);  }
////   digitalWrite(dirPin,HIGH);
////  for(int x = 0; x < 15; x++) {
////    digitalWrite(stepPin,HIGH); 
////    delayMicroseconds(5000); 
////    digitalWrite(stepPin,LOW); 
////    delayMicroseconds(5000);   }
//// digitalWrite(dirPin,LOW);
////  for(int x = 0; x < 15; x++) {
////    digitalWrite(stepPin,HIGH); 
////    delayMicroseconds(5000); 
////    digitalWrite(stepPin,LOW); 
////    delayMicroseconds(5000);  }
////
////    delay(5000);
//  }

int led = 13;           // the PWM pin the LED is attached to
int brightness = 0;    // how bright the LED is
int fadeAmount = 1;    // how many points to fade the LED by

// the setup routine runs once when you press reset:
void setup() {
  // declare pin 9 to be an output:
  pinMode(led, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  for(int i=100; i<255; i++){
    analogWrite(led, brightness+i);
    delay(60);
  }  
  
}
