/*
  
  Armband wrist buzzer for an ATtiny45 or ATtiny85
  
  Built by John Keefe
  March 2015
  
 */
 
// No Pin 13 on an ATtiny, so using Pin 0.
int led_one = 0;
int buzzer = 4;

// the setup routine runs once
void setup() {                
  // initialize the digital pins as outputs
  pinMode(led_one, OUTPUT);
  pinMode(buzzer, OUTPUT);    
}

// the loop usually runs forever, but I've made it run only once
void loop() {
  
  // buzz quickly on startup
  buzz(2);
  
  // wait 20 minutes (1,200,000 milliseconds)
  // (actually was 20 seconds short, so added a few!)
  delay(1220000);
  
  // buzz a bunch of times
  buzz(20);
  
  // turn on steady to indicate done
  // and prompt me to turn off the unit
  digitalWrite(led_one, HIGH);   // turn the LED on (HIGH is the voltage level)
  
  // loop forever
  while (true) {
    // do nothing
  }
  
  
}

void buzz(int repeat) {
  
  // buzz the number of times that is passed to the function
  for (int i = 0; i < repeat; i++) { 
    digitalWrite(buzzer, HIGH);   // turn the buzzer on (HIGH is the voltage level)
    digitalWrite(led_one, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(1000);               // wait for a second
    digitalWrite(buzzer, LOW);    // turn the buzzer off by making the voltage LOW
    digitalWrite(led_one, LOW);   // turn the LED on (HIGH is the voltage level)
    delay(100);
  }
  
}



