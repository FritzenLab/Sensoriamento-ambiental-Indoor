// These constants won't change. They're used to give names  
 // to the pins used:  
 const int analogInPin = A1; // Analog input pin that the potentiometer is attached to  
   
   
 int sensorValue = 0;    // value read from the pot  
   
 void setup() {  
  // initialize serial communications at 9600 bps:  
  Serial.begin(9600);   
 }  
   
 void loop() {  
  // read the analog in value:  
  sensorValue = analogRead(analogInPin);        
       
   
  // print the results to the serial monitor:  
  Serial.println("Temperatura NTC = " );              
  Serial.print(sensorValue);     
   
   
  // wait 2 milliseconds before the next loop  
  // for the analog-to-digital converter to settle  
  // after the last reading
  delay(1000);             
 }  
