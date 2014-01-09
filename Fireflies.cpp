#include "Fireflies.h"


Fireflies::Specie Fireflies::species[];

Fireflies::Fireflies(){
//  Specie species[NUMBER_OF_SPECIES];
//Fireflies f();
  
//    f.species[] =
//// 
// f.species == speciesA;
// f.species[] = 
};

  void Fireflies::setupFireflies(){
     createData();
  };



void Fireflies::createData(){
//  Fireflies f;
    Specie speciesA[NUMBER_OF_SPECIES] = {
    { "Photuris ludicrecens",   Fireflies::Photuris_ludicrecens_male,    199, 545, Fireflies::Photuris_ludicrecens_female,     0, 0    },
    { "Photuris pennsylvanica", Fireflies::Photuris_pennsylvanica_male,  259, 465, Fireflies::Photuris_pennsylvanica_female,   0, 0    },
    { "Photuris versicolor",    Fireflies::Photuris_versicolor_male,     116, 425, Fireflies::Photuris_versicolor_female,      0, 0    },
    { "Photuris quadrifulgens", Fireflies::Photuris_quadrifulgens_male,   74, 450, Fireflies::Photuris_quadrifulgens_female,   0, 0    },
    { "Photuris pyralomima",    Fireflies::Photuris_pyralomima_male,      53, 450, Fireflies::Photuris_pyralomima_female,      0, 0    },
    { "Photuris tremulans",     Fireflies::Photuris_tremulans_male,       95, 640, Fireflies::Photuris_tremulans_female,       0, 0    },
    { "Photuris aureolucens",   Fireflies::Photuris_aureolucens_male,     10, 385, Fireflies::Photuris_aureolucens_female,     0, 0    },
    { "Photuris hebes",         Fireflies::Photuris_aureolucens_male,     10, 180, Fireflies::Photuris_aureolucens_female,     0, 0    },
    { "Photuris frontalis",     Fireflies::Photuris_frontalis_male,       10,  90, Fireflies::Photuris_frontalis_female,       0, 0    },
    { "Photinis brimleyi",      Fireflies::Photuris_frontalis_male,       10, 100, Fireflies::Photinus_brimleyi_female,      146, 1000 },
 }; 
// memcpy(Fireflies::species, speciesA, NUMBER_OF_SPECIES);
 for(int i=0;i< NUMBER_OF_SPECIES;i++){
   Fireflies::species[i] = speciesA[i];
//    Serial.println(speciesA[i].name);
    Serial.println(Fireflies::species[i].name);//f.species dosen't work, 
 };
};

const byte* Fireflies::getValues(int specie, int sex){
  if (sex == 0){return species[specie].flash_values_male;}
  else if (species[specie].flash_length_female == 0){
    return species[specie].flash_values_female;
  }else{
    return species[specie].flash_values_male;
  }
};

int  Fireflies::getFlashLength(int specie, int sex){
  if (sex == 0){
  return species[specie].flash_length_male;
} else if (species[specie].flash_length_female == 0){
    return species[specie].flash_length_female;
  }else{
    return species[specie].flash_length_male;
  }
};

int Fireflies::getFlashInterval(int specie, int sex){
  if (sex == 0){
    return species[specie].flash_interval_male;
  }else if (species[specie].flash_length_female = 0){
    return species[specie].flash_interval_female;
  }else{
    return species[specie].flash_interval_male;
  }
};

int Fireflies::getNumberOfSpecies(){
  return NUMBER_OF_SPECIES;
};
  
  String Fireflies::getNameofSpecies(int i){
     return species[i].name;
  };

void Fireflies::printSpeciesList(){
 for(int i=0;i< NUMBER_OF_SPECIES;i++){
    Serial.println(Fireflies::species[i].name);
 }
}


const byte Fireflies::Photuris_ludicrecens_male[] = {1,3,4,6,7,8,10,11,12,14,
    15,17,18,19,21,22,24,25,26,28,29,31,32,33,35,36,38,39,40,42,43,
    44,46,47,49,50,51,53,54,56,57,58,60,61,62,64,65,67,68,69,71,72,
    74,75,76,78,79,81,82,83,85,86,88,89,90,92,93,94,96,97,99,100,101,
    103,104,106,107,108,110,111,112,114,115,117,118,119,121,122,124,
    125,126,128,129,131,132,133,135,136,138,139,140,142,143,144,146,
    147,149,150,151,153,154,156,157,158,160,161,162,164,165,167,168,
    169,171,172,174,175,176,178,179,181,182,183,185,186,188,189,190,
    192,193,194,196,197,199,200,201,203,204,206,207,208,210,211,212,
    214,215,217,218,219,221,222,224,225,226,228,229,231,232,233,235,
    236,238,239,240,242,243,244,246,247,249,250,247,244,240,235,230,
    224,218,210,200,190,177,166,154,140,127,110,90,70,40};
    const byte Fireflies::Photuris_ludicrecens_female[] = {0};
    
  const byte Fireflies::Photuris_pennsylvanica_male[] = {28,56,84,112,140,168,
    196,168,140,112,84,56,28,0,0,0,0,0,0,0,0,0,0,28,56,84,112,140,
    168,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,
    196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,
    196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,
    196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,
    196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,
    196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,
    196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,
    196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,
    196,196,196,196,196,196,196,196,196,196,196,196,196,196,194,192,
    189,187,185,183,181,179,176,174,172,170,168,166,163,161,159,157,
    155,152,150,148,146,144,142,139,137,135,133,131,128,126,124,122,
    120,118,115,113,111,109,107,105,102,100,98,96,94,91,89,87,85,83,
    81,78,76,74,72,70,68,65,63,61,59,57,54,52,50,48,46,44,41,39,37,
    35,33,30,28,26,24,22,20,17,15,13,11,9,7,4,2};
  const byte Fireflies::Photuris_pennsylvanica_female[] = {0};
  
  const byte Fireflies::Photuris_versicolor_male[] = {42,84,126,168,210,252,210,
    168,126,84,42,0,0,0,0,0,0,0,0,0,0,35,70,105,140,175,210,175,140,
    105,70,35,0,0,0,0,0,0,0,0,0,0,28,56,84,112,140,168,140,112,84,56,
    28,0,0,0,0,0,0,0,0,0,0,22,44,66,88,110,132,110,88,66,44,22,0,0,
    0,0,0,0,0,0,0,0,15,30,45,60,75,90,75,60,45,30,15,0,0,0,0,0,0,
    0,0,0,0,8,16,24,32,40,48,40,32,24,16,8};
  const byte Fireflies::Photuris_versicolor_female[] = {0};
  
  const byte Fireflies::Photuris_quadrifulgens_male[] = {42,84,126,168,210,252,
    210,168,126,84,42,0,0,0,0,0,0,0,0,0,0,42,84,126,168,210,252,210,
    168,126,84,42,0,0,0,0,0,0,0,0,0,0,42,84,126,168,210,252,210,168,
    126,84,42,0,0,0,0,0,0,0,0,0,0,42,84,126,168,210,252,210,168,126,
    84,42};
  const byte Fireflies::Photuris_quadrifulgens_female[] = {0};
  
  const byte Fireflies::Photuris_pyralomima_male[] = {28,56,84,112,140,168,196,
    196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,
    196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,
    196,196,196,196,196,196,196,196,168,140,112,84,56,28};
  const byte Fireflies::Photuris_pyralomima_female[] = {0};
  
  const byte Fireflies::Photuris_tremulans_male[] = {63,126,189,252,189,126,63,
    0,63,126,189,252,189,126,63,0,63,126,189,252,189,126,63,0,63,126,
    189,252,189,126,63,0,63,126,189,252,189,126,63,0,63,126,189,252,
    189,126,63,0,63,126,189,252,189,126,63,0,63,126,189,252,189,126,
    63,0,63,126,189,252,189,126,63,0,63,126,189,252,189,126,63,0,63,
    126,189,252,189,126,63,0,63,126,189,252,189,126,63};
  const byte Fireflies::Photuris_tremulans_female[] = {0};
  
  const byte Fireflies::Photuris_aureolucens_male[] = {12,25,37,50,50,50,50,37,
    25,12};
  const byte Fireflies::Photuris_aureolucens_female[] = {0};
  
  const byte Fireflies::Photuris_frontalis_male[] = {25,50,75,100,100,100,100,75,
    50,25};
  const byte Fireflies::Photuris_frontalis_female[] = {0};
  
  const byte Fireflies::Photinus_brimleyi_female[] = {25,50,75,100,100,100,100,
    100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,
    100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,
    100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,
    100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,
    100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,
    100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,
    100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,
    100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,
    100,100,100,100,100,100,100,100,75,50,25};
    
  
