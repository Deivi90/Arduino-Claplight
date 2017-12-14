
void setup() {
  Serial.begin(9600);             // using serial port to check analog value
  pinMode(2, OUTPUT);             // LED on digital pin 2
}

void loop() {
  int analog_val;                 // analog value read from A2
 // static bool led_state = false;  // current state of LED
  
  analog_val = analogRead(A2);
  
  Serial.println(analog_val); // print analog value for debug purposes
  if (analog_val > 30) {          // trigger threshold
    
      //digitalWrite(2,  digitalRead(2) ^ 1);
      digitalWrite(2,  HIGH);
      Serial.print("Entro: ");
      Serial.println(analog_val); // print analog value for debug purposes
    
      delay(1000);  // wait for clap noise to subside
      if (analog_val > 20) {          // trigger threshold

            digitalWrite(2,  LOW);
      }
  }
}

