#include "Firefly.h"
   
  
boolean debug = true;
  
byte Firefly::PERCENTAGE_MALES  = 75;
  
Firefly::Firefly(){  
};

void Firefly::setupFireflies(Fireflies *f){
 
}
  
void Firefly::setFirefly(int species, int sex, int light){
   
//   fireflies.printSpeciesList();
  Serial.println("We've updated a firefly");
  specie = species;//random(Fireflies::NUMBER_OF_SPECIES);
  
  flash_values = fireflies->getValues(species, sex);
  
  flash_length = fireflies->getFlashLength(species, sex);

  flash_interval = fireflies->getFlashInterval(species, sex);
    
  Serial.print("FlashInterval ");
  Serial.println(flash_interval);
   Serial.print("FlashLength ");
  Serial.println(flash_length);
  
  pin = light;
  int similarDist= flash_interval/4;
  state = true;
  Serial.print("Specie ");
  Serial.println(species);
  Serial.print("Sex ");
  Serial.println(sex);
  Serial.print("Light ");
  Serial.println(light);
  Serial.println(fireflies->getNameofSpecies(species));
}
  
  
int Firefly::getNumberofSpecies(){
  return fireflies-> getNumberOfSpecies();
};

String Firefly::getNameofSpecies(){
  return fireflies-> getNameofSpecies(specie);
};

boolean Firefly::getState(){
  return state;
};
  
void Firefly::setTimer(int time){
  loopCounter = time;
};

byte Firefly::getBrightness(){
  return brightness;
};

int Firefly::getPin(){
  return pin;
}


//This is the main logic update loop ------------------------------------------
void Firefly::update(){
  switch (getState()) {

        case false:
        if(loopCounter >= flash_interval) {
            state = true;
            loopCounter = 0;   
        }else{
          loopCounter++;
        }
        break;
      
      case true:
       //Have we run over the flash length?
        if(loopCounter >= flash_length) {
          state = false;
          //Lets loop the counter
          loopCounter -= flash_length;
        }
        //If the light is on, flash
        if(state == true) {
          loopCounter++;
          brightness = flash_values[loopCounter];

          //  setLight(lights[i].light, flash_values);

        } else {
          
        }
      break;
  }
};
