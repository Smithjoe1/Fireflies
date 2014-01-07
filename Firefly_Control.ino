// Program..: Firefly_v.3_Code.pde
// Author...: l.e. hughes
// Date.....: 16 Apr 2011
// Notes....: 
//
// Author...: D Murray
// Date.....: 5 Jan 2014
// Notes....: 
#include <TimedAction.h>
#include "Firefly.h"
#include "Fireflies.h"

#define NUMBER_OF_LIGHTS 11 // number of lights we are using


const int  TICK_INTERVAL     = 5;   // this is milliseconds, btw
int similarMax = 20;
int similarDist;  //number of millis for each start to be considered a similar ping, we init this based on the length of the interval from below
int shiftDist;    //How far the random bound is in adjusting how close each LED sync is

Firefly firefly[NUMBER_OF_LIGHTS];
Fireflies fireflies;

int specie = random(fireflies.getNumberOfSpecies());


TimedAction tickAction   = TimedAction(TICK_INTERVAL, tickFlies); 

int j = 0;


void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));
  
  Serial.println(NUMBER_OF_LIGHTS);
  //  initializeLights();
  for(int i=0; i<= 8; i++){
    
    firefly[i].setFirefly(1,0,i);
//        firefly[i].setTimer(random(500));

//    Serial.println(firefly[i].getNameofSpecies());

  }
  
}

// This just sets the light (pin) to a given PWM value
//
void setLight(byte light, byte value){
  analogWrite(light, value);
}

// This routine: 1). Sets the specie; 2). Determines which lights will be male and which female if
// there is an array for female flash defined; and 3). Initializes the timing for each light within
// +- 500 ms, primarily so that all lights do not start at the same time.
// 


// This routine simply cycles through each fly to determine what action to take and
// increment the PWM value if the flash state is on. If the cycle is at the end of 
// the flash state (end of digitized flash), it moves to the interval phase (off).
// There is some minor (50 ms) randomness introduced at the start of the
void tickFlies() {
  for (byte i=0; i<NUMBER_OF_LIGHTS; i++) {  
    firefly[i].update();
    setLight(i,firefly[i].getBrightness());
    
    Serial.print("Light :");
    Serial.print(i);
    Serial.print(" Brightness ");
    Serial.println(firefly[i].getBrightness());
  }
}






float ms = 1000000.0 / 60.0;
long lastTime = micros();
double delta = 0;
  

void loop() {
  
  //TODO: Swap tick action with proper timer below, can create another delta and ms value to get it updating every 100ms.
  tickAction.check();

    long now=micros();
    delta += (now-lastTime) / ms;
    lastTime = now;
    while (delta >= 1){
      //Slow logic happens here
      Serial.println("Soemthing");
     delta--; 
    }
    //Runs every cycle happens here
    
}
