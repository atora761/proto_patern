#include "../include/PaternJudge.h"
#include "../include/PaternSlalom.h"
#include "../include/PaternGarage.h"

PaternJudge::PaternJudge(){
    slalomPatarn=0;
    garagePatarn=0;
}
PaternJudge::~PaternJudge(){
    delete comparison;
}
int8 PaternJudge::Judge(int8 _patern){
    int8 paternChk=0;
    Comparison comparison;
    if(_patern==SLALOM){
        comparison=new PaternSlalom;
    }
    else if(_patern==GARAGE){
        comparison=new PaternGarage;
    }

    paternChk=comparison.decide();
    
    if(_patern==SLALOM){
        slalomPatarn=paternChk;
        return SYS_OK;
    }    
    else if(_patern==GARAGE){
        garagePatarn=paternChk;
        return SYS_OK;
    }
}
int8 PaternJudge::getSlalom(){
    return slalomPatarn;
}
int8 PaternJudge::getGarage(){
    return garagePatarn;
}