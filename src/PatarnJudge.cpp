#include "../include/PaternJudge.h"

PaternJudge(){
    slalomPatarn=0;
    garagePatarn=0;
}
~PaternJudge(){
    delete comparison;
}
int8 Judge(int8 _patern){
    int8 paternChk=0;
    Comparison comparison;
    if(_patern==SLALOM){
        comparison=new PaternSlalom;
    }
    else if(_patern==Garage){
        comparison=new PaternGarage;
    }

    paternChk=comparison.decide();
    
    if(_patern==SLALOM){
        slalomPatarn=paternChk;
    }    
    else if(_patern==GARAGE){
        garagePatarn=paternChk;
    }
}
int8 getSlalom(){
    return slalomPatarn;
}
int8 getGarage(){
    return garagePatarn;
}