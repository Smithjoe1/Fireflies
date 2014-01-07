#include "Firefly.h"
   
  
boolean debug = true;
  
byte Firefly::PERCENTAGE_MALES  = 75;
  
Firefly::Firefly(){  
};
  
  
void Firefly::setFirefly(int species, int sex, int light){
  specie = species;//random(Fireflies::NUMBER_OF_SPECIES);
  
  flash_values = fireflies.getValues(species, sex);
  
  flash_length = fireflies.getFlashLength(species, sex);
  flash_interval = fireflies.getFlashInterval(species, sex);
  pin = light;
  int similarDist= flash_interval/4;
  Serial.println("We've updated a firefly");
  Serial.println(species);
  Serial.println(sex);
  Serial.println(light);
}
  
  
int Firefly::getNumberofSpecies(){
  return fireflies.getNumberOfSpecies();
};

String Firefly::getNameofSpecies(){
  return fireflies.getNameofSpecies(specie);
};

Firefly::flashState Firefly::getState(){return state;};
  
void Firefly::setTimer(int time){
  loopCounter = time;
};

byte Firefly::getBrightness(){
  return brightness;
};


//This is the main logic update loop ------------------------------------------
void Firefly::update(){
  switch (getState()) {
        case OFF:
        if(loopCounter >= flashInterval) {
            state = ON;
          }
        if(state = ON) {
           loopCounter = 0; 
        }else{
          loopCounter++;
        }
        break;
      
      case ON:
      
       //Have we run over the flash length?
        if(loopCounter >= flashLength) {
          state = OFF;
          //Lets loop the counter
          loopCounter -= flashLength;
        }
        //If the light is on, flash
        if(state == ON) {
          loopCounter++;
          brightness = flash_values[loopCounter];

          //  setLight(lights[i].light, flash_values);

        } else {
          
        }
      break;
  }
};
