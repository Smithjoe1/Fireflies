
// The following are basically a digitization of the shape and duration of the flash based on the Barber, 1951 
// publication and a tick interval of 10 milliseconds (thus, a hundred values = one second). Unfortunately, 
// Barber, 1951, makes no distinction between sexes, so a single 0 value in the female arrays tells the program
// to use only the male flash pattern.
#ifndef Firefly_H
#define Firefly_H
#include "Arduino.h"
#include "Fireflies.h"

class Firefly {
  private:
  

    
    typedef enum {MALE, FEMALE, BOTH} sexType;
    sexType sexes; 
  
    // This struct will maintain the stateful data for each light
  //
 public:
    
  typedef enum {OFF, ON} flashState;
  
    
  Firefly();
  void setFirefly(int specie, int sex, int light);
  void setupFireflies(Fireflies f);
  
  boolean debug;
  //Controls
  void initializeLights();
  void switchState();
  void off();
  void on();
  void setTimer(int time);
  void update();
  
  //Return values
  int getNumberofSpecies();
  String getNameofSpecies();
  
  flashState getState();
  
  byte getBrightness();
  
  Fireflies fireflies;
  static byte PERCENTAGE_MALES;// used to set male-to-female ratios where both sex flashes are defined
    //Which species do we use?
    int specie;
    int similarDist;
    
    const byte* flash_values;
    int flash_length;
    int flash_interval;
    byte brightness;
    int pin;                
    flashState state;           // current state: ON means in a flash cycle; OFF means in the interval between flashes
    int loopCounter;            // where in the flash cycle or interval we are
    sexType sex;
    int flashLength;             //How long the cycle will last for, to prevent unnessacary lookups which are happening everywhere at the moment.
    int flashInterval;
    int shiftDist;
    int similarCount; //How many flashes has the led been in a pair for?
  
};
#endif
