//Version 1.0
/*music*/
#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define NOTE_C2  65
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186
#define NOTE_CS8 4435
#define NOTE_D8  4699
#define NOTE_DS8 4978

//Mario main theme melody
int melody[] = {
  NOTE_E7, NOTE_E7, 0, NOTE_E7,
  0, NOTE_C7, NOTE_E7, 0,
  NOTE_G7, 0, 0,  0,
  NOTE_G6, 0, 0, 0,

  NOTE_C7, 0, 0, NOTE_G6,
  0, 0, NOTE_E6, 0,
  0, NOTE_A6, 0, NOTE_B6,
  0, NOTE_AS6, NOTE_A6, 0,

  NOTE_G6, NOTE_E7, NOTE_G7,
  NOTE_A7, 0, NOTE_F7, NOTE_G7,
  0, NOTE_E7, 0, NOTE_C7,
  NOTE_D7, NOTE_B6, 0, 0,

  NOTE_C7, 0, 0, NOTE_G6,
  0, 0, NOTE_E6, 0,
  0, NOTE_A6, 0, NOTE_B6,
  0, NOTE_AS6, NOTE_A6, 0,

  NOTE_G6, NOTE_E7, NOTE_G7,
  NOTE_A7, 0, NOTE_F7, NOTE_G7,
  0, NOTE_E7, 0, NOTE_C7,
  NOTE_D7, NOTE_B6, 0, 0
};
//Mario main them tempo
int tempo[] = {
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,

  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,

  9, 9, 9,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,

  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,

  9, 9, 9,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
};
//Underworld melody
int underworld_melody[] = {
  NOTE_C4, NOTE_C5, NOTE_A3, NOTE_A4,
  NOTE_AS3, NOTE_AS4, 0,
  0,
  NOTE_C4, NOTE_C5, NOTE_A3, NOTE_A4,
  NOTE_AS3, NOTE_AS4, 0,
  0,
  NOTE_F3, NOTE_F4, NOTE_D3, NOTE_D4,
  NOTE_DS3, NOTE_DS4, 0,
  0,
  NOTE_F3, NOTE_F4, NOTE_D3, NOTE_D4,
  NOTE_DS3, NOTE_DS4, 0,
  0, NOTE_DS4, NOTE_CS4, NOTE_D4,
  NOTE_CS4, NOTE_DS4,
  NOTE_DS4, NOTE_GS3,
  NOTE_G3, NOTE_CS4,
  NOTE_C4, NOTE_FS4, NOTE_F4, NOTE_E3, NOTE_AS4, NOTE_A4,
  NOTE_GS4, NOTE_DS4, NOTE_B3,
  NOTE_AS3, NOTE_A3, NOTE_GS3,
  0, 0, 0
};
//Underwolrd tempo
int underworld_tempo[] = {
  12, 12, 12, 12,
  12, 12, 6,
  3,
  12, 12, 12, 12,
  12, 12, 6,
  3,
  12, 12, 12, 12,
  12, 12, 6,
  3,
  12, 12, 12, 12,
  12, 12, 6,
  6, 18, 18, 18,
  6, 6,
  6, 6,
  6, 6,
  18, 18, 18, 18, 18, 18,
  10, 10, 10,
  10, 10, 10,
  3, 3, 3
};
/*music end*/


/*
 HC-SR04 Ping distance sensor:
 VCC to arduino 5v 
 GND to arduino GND
 Echo to Arduino pin 7 
 Trig to Arduino pin 8
 pin 2 A4 A5 A6 6 9 10 11 12 outputs to led
 pin 13 is buzzer
 A3 to white LED
 A1 to LDR
 A2 to switch to GND through 100k pull up
 Pin 4 to PIR1 with LDR
 Pin 3 to PIR2
 Pin 5 to Motion out/CFL relay
 
 connect DTR to DTR of CP2102 
 while programming pro mini atmega328 16mhz 5v
 RXD to RXD of CP2102
 TXD to TXD of CP2102
 64 cm depth is empty
 56cm water is overflow
  */

#define melodyPin 13
#define echoPin 7 // Echo Pin
#define trigPin 8 // Trigger Pin
#define LEDPin 13 // Buzzer
int maximumRange = 300; // Maximum range needed
int minimumRange = 0; // Minimum range needed
long duration, distance; // Duration used to calculate distance


int inputPinPir1Ldr1 = 4;               // choose the input pin (for PIR1 sensor)
int inputPinPir2 = 3;               // choose the input pin (for PIR2 sensor)
int pirState = LOW;             // we start, assuming no motion detected
int val = 0;                    // variable for reading the PIR1 status
int val2 = 0;                    // variable for reading the PIR2 status
int switchState = 0;
int relayOnTime = 20; //enter the loop count for relay to be on //1 count is approx 1.5 second
// These constants won't change.  They're used to give names
// to the pins used:
const int analogInPin = A1;  // Analog input pin that the LDR is attached to
const int relayOutPin = 5; // relay output pin that the LED is attached to
const int switchInPin = A2;  // Analog input pin that switch is connected
const int motionOnPin = A3;  // Analog input pin white/red-indicator LED is connected
int sensorValue = 0;        // value read from the LDR
int relayCounter = 0;       //counter which countes to relayOnTime, this is used to avoid delay fn which blocks water lvl cntrl


void setup() {
Serial.begin (9600);
pinMode(2, OUTPUT);
pinMode(A4, OUTPUT);
pinMode(A5, OUTPUT);
pinMode(A6, OUTPUT);
pinMode(6, OUTPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
pinMode(12, OUTPUT);
pinMode(echoPin, INPUT);
pinMode(trigPin, OUTPUT);
pinMode(LEDPin, OUTPUT); // Use LED indicator (if required)

pinMode(inputPinPir1Ldr1, INPUT);     // declare PIR1 as input
pinMode(inputPinPir2, INPUT);     // declare PIR2 as input
pinMode(relayOutPin, OUTPUT);     // declare sensor as input
pinMode(switchInPin, INPUT);     // declare Switch as input
pinMode(motionOnPin, OUTPUT);     // declare Switch as input
digitalWrite(motionOnPin, LOW);
digitalWrite(relayOutPin, LOW);
 
}

void loop() {

    if (pirState == HIGH){
      relayCounter=relayCounter+1;
      if(relayCounter == relayOnTime){
        digitalWrite(relayOutPin, LOW);
        pirState = LOW;
        relayCounter = 0;
      }
    }
    Serial.print("\nMotion relay state = ");
    Serial.print(pirState);
    Serial.print("\nMotion relay counter = ");
    Serial.print(relayCounter);
    /* The following trigPin/echoPin cycle is used to determine the
     distance of the nearest object by bouncing soundwaves off of it. */ 
     digitalWrite(trigPin, LOW); 
     delayMicroseconds(2); 
    
     digitalWrite(trigPin, HIGH);
     delayMicroseconds(10); 
     
     digitalWrite(trigPin, LOW);
     duration = pulseIn(echoPin, HIGH);
     
     //Calculate the distance (in cm) based on the speed of sound.
     distance = duration/58.2;
     Serial.print("\nPing distance = ");Serial.print(distance);
     if (distance >= maximumRange || distance <= minimumRange){
       /* Send a negative number to computer and Turn LED ON 
       to indicate "out of range" */
       Serial.println("\n-1");
     }
     else {
       /* Send the distance to the computer using Serial protocol, and
       turn LED OFF to indicate successful reading. */
       Serial.println(distance);
       digitalWrite(LEDPin, LOW); 
     }
     //motor control 
     if (distance <= 7 ){
       Serial.println("Motor off");
       digitalWrite(12, LOW); 
     }
    
      //motor control 
     if (distance >= 40 ){
       Serial.println("Motor on");
       digitalWrite(12, HIGH); 
     }
      //empty check
     if (distance >= 64 && distance <= 300){
       Serial.println("step1");
       digitalWrite(2, HIGH); 
     }
     else {
       digitalWrite(2, LOW); 
     }
     //8 cm water
     if (distance >= 56 && distance < 64){
       Serial.println("step2");
       digitalWrite(A4, HIGH); 
     }
     else {
       digitalWrite(A4, LOW); 
     } 
     //14 cm water
     if (distance >= 50 && distance < 56){
       Serial.println("step3");
       digitalWrite(A5, HIGH); 
     }
     else {
       digitalWrite(A5, LOW); 
     } 
     //19 cm water 
     if (distance >= 45 && distance < 50){
       Serial.println("step4");
       digitalWrite(A6, HIGH); //this wont work for A6 there is no digital write
     }
     else {
       digitalWrite(A6, LOW); 
     } 
     //24 cm water 
     if (distance >= 40 && distance < 45){
       Serial.println("step5");
       digitalWrite(6, HIGH); 
     }
     else {
       digitalWrite(6, LOW); 
     } 
     //34 cm water  
     if (distance >= 30 && distance < 40){
       Serial.println("step6");
       digitalWrite(9, HIGH); 
     }
     else {
       digitalWrite(9, LOW); 
     } 
     //44 cm water  
     if (distance >= 20 && distance < 30){
       Serial.println("step7");
       digitalWrite(10, HIGH); 
     }
     else {
       digitalWrite(10, LOW); 
     } 
     //56 cm water 
     if (distance >= 8 && distance < 20){
       Serial.println("step8");
       digitalWrite(11, HIGH); 
     }
     else {
       digitalWrite(11, LOW); 
     }  
     //58 cm water 
     // overflow alarm
     if (distance >= 6 && distance < 8){
       Serial.println("step9");
       digitalWrite(11, HIGH); 
       sing(1);
       delay(1000);
       //sing(1);
       //delay(1000);
       //sing(2);
       //motor control 2
       if (distance <= 7 ){
         Serial.println("Motor off 2");
         //last led pin 12
         digitalWrite(12, LOW); 
       }
       while (distance < 10) {
          //delay(5000);
          motion();
          delay(100);
          /* check distance */
          digitalWrite(trigPin, LOW); 
          delayMicroseconds(2); 
          digitalWrite(trigPin, HIGH);
          delayMicroseconds(10); 
          digitalWrite(trigPin, LOW);
          duration = pulseIn(echoPin, HIGH);
          //Calculate the distance (in cm) based on the speed of sound.
          distance = duration/58.2;
          Serial.print("\nPing distance2 = ");Serial.print(distance);
          /* chk distance end*/
       }//while distance <10
     }//<10 if
     motion();
     //Delay 200ms before next reading.
     delay(1000);
}//void loop end


int song = 0;
void sing(int s) {
  // iterate over the notes of the melody:
  song = s;
  if (song == 2) {
    Serial.println(" 'Underworld Theme'");
    int size = sizeof(underworld_melody) / sizeof(int);
    for (int thisNote = 0; thisNote < size; thisNote++) {

      // to calculate the note duration, take one second
      // divided by the note type.
      //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
      int noteDuration = 1000 / underworld_tempo[thisNote];

      buzz(melodyPin, underworld_melody[thisNote], noteDuration);

      // to distinguish the notes, set a minimum time between them.
      // the note's duration + 30% seems to work well:
      int pauseBetweenNotes = noteDuration * 1.30;
      delay(pauseBetweenNotes);

      // stop the tone playing:
      buzz(melodyPin, 0, noteDuration);

    }

  } else {

    Serial.println(" 'Mario Theme'");
    int size = sizeof(melody) / sizeof(int);
    for (int thisNote = 0; thisNote < size; thisNote++) {

      // to calculate the note duration, take one second
      // divided by the note type.
      //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
      int noteDuration = 1000 / tempo[thisNote];

      buzz(melodyPin, melody[thisNote], noteDuration);

      // to distinguish the notes, set a minimum time between them.
      // the note's duration + 30% seems to work well:
      int pauseBetweenNotes = noteDuration * 1.30;
      delay(pauseBetweenNotes);

      // stop the tone playing:
      buzz(melodyPin, 0, noteDuration);

    }
  }
}

void buzz(int targetPin, long frequency, long length) {
  digitalWrite(3, HIGH);
  long delayValue = 1000000 / frequency / 2; // calculate the delay value between transitions
  //// 1 second's worth of microseconds, divided by the frequency, then split in half since
  //// there are two phases to each cycle
  long numCycles = frequency * length / 1000; // calculate the number of cycles for proper timing
  //// multiply frequency, which is really cycles per second, by the number of seconds to
  //// get the total number of cycles to produce
  for (long i = 0; i < numCycles; i++) { // for the calculated length of time...
    digitalWrite(targetPin, HIGH); // write the buzzer pin high to push out the diaphram
    delayMicroseconds(delayValue); // wait for the calculated delay value
    digitalWrite(targetPin, LOW); // write the buzzer pin low to pull back the diaphram
    delayMicroseconds(delayValue); // wait again or the calculated delay value
  }
  digitalWrite(3, LOW);

}

void motion(){
      //checking motion switch connected to analog pin ( switchInPin ) state 1 = vcc through pull up state 0 =switch close to GND
      switchState = digitalRead(switchInPin);
      Serial.print("Switch state is = ");
      Serial.print(switchState);
      if (switchState == 1) {
              //-------------ldr------start----------
              // read the analog in value:
              sensorValue = analogRead(analogInPin);
              // map it to the range of the analog out:
              //outputValue = map(sensorValue, 0, 1023, 0, 255);
              // drive relay
               // print the results to the serial monitor:
              Serial.print("\nLDR sensor = ");
              Serial.print(sensorValue);
              Serial.print("\n");
              //Serial.println(outputValue);
            
            if (sensorValue < 500) { //in bright light sensor value is around 1000, in darkness it is about 20-30
                      digitalWrite(motionOnPin, HIGH);
                      //-------------pir----start---
                      val = digitalRead(inputPinPir1Ldr1);  // read input value PIR1
                      val2 = digitalRead(inputPinPir2);  // read input value PIR2
        
                      if (val == HIGH || val2 == HIGH) {            // check if the input is HIGH
                        //digitalWrite(ledPin, HIGH);  // turn LED ON
                        if (pirState == LOW) {
                          // we have just turned on
                          Serial.println("Motion detected!");
                          digitalWrite(relayOutPin, HIGH);
                          //delay(relayOnTime);
                          // We only want to print on the output change, not state
                          pirState = HIGH;
                        }
                      } else {
                        //digitalWrite(ledPin, LOW); // turn LED OFF
                        //if (pirState == HIGH){
                          // we have just turned of
                          Serial.println("PIR low");
                          // We only want to print on the output change, not state
                          //digitalWrite(relayOutPin, LOW);
                          //pirState = LOW;
                        //}
                      }
                    //-------------pir----end---
            }else {
              digitalWrite(motionOnPin, HIGH);
              delay(100);
              digitalWrite(motionOnPin, LOW);
              delay(100);
              digitalWrite(motionOnPin, HIGH);
              delay(100);
              digitalWrite(motionOnPin, LOW);
              delay(100);
              digitalWrite(motionOnPin, HIGH);
              delay(100);
              digitalWrite(motionOnPin, LOW);
              
            }
              // wait 2 milliseconds before the next loop
              // for the analog-to-digital converter to settle
              // after the last reading:
              delay(2);
             //-------------ldr------end----------
      }//switch == 1 end
      else{
          digitalWrite(motionOnPin, LOW);
          Serial.print("\nSensor = OFF\n");
      }

}

