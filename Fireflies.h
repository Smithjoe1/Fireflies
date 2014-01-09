
// The following are basically a digitization of the shape and duration of the flash based on the Barber, 1951 
// publication and a tick interval of 10 milliseconds (thus, a hundred values = one second). Unfortunately, 
// Barber, 1951, makes no distinction between sexes, so a single 0 value in the female arrays tells the program
// to use only the male flash pattern.

#ifndef Fireflies_H
#define Fireflies_H
#include "Arduino.h"

class Fireflies {
  public:  
  #define NUMBER_OF_SPECIES 10 

  Fireflies();
  Fireflies f();
  
  void createData();
  
  const byte* getValues(int specie, int sex);
  
  int  getFlashLength(int specie, int sex);
  int getFlashInterval(int specie, int sex);
  int getNumberOfSpecies();
  String getNameofSpecies(int i);
  void printSpeciesList();
  
  
  static const byte Photuris_ludicrecens_male[199];
  static const byte Photuris_ludicrecens_female[1];
  
  static const byte Photuris_pennsylvanica_male[259];
  static const byte Photuris_pennsylvanica_female[1];
  
  static const byte Photuris_versicolor_male[116];
  static const byte Photuris_versicolor_female[1];
  
  static const byte Photuris_quadrifulgens_male[74];
  static const byte Photuris_quadrifulgens_female[1];
  
  static const byte Photuris_pyralomima_male[53];
  static const byte Photuris_pyralomima_female[1];
  
  static const byte Photuris_tremulans_male[95];
  static const byte Photuris_tremulans_female[1];
  
  static const byte Photuris_aureolucens_male[10];
  static const byte Photuris_aureolucens_female[1];
  
  static const byte Photuris_frontalis_male[10];
  static const byte Photuris_frontalis_female[1];
  
  static const byte Photinus_brimleyi_female[146];
  
  typedef struct ff {
    String name;
    const byte *flash_values_male;
    int flash_length_male;
    int flash_interval_male;
    const byte *flash_values_female;
    int flash_length_female;
    int flash_interval_female;
  } Specie;
  // Each species is defined, primarily to set the length of the arrays above and the intervals for timing. If you
  // add any new species, the NUMBER_OF_SPECIES values at the top, needs to reflect that.
  // 
//  vector<Specie> species;
   Specie species[NUMBER_OF_SPECIES];
  private:
  
};
#endif
