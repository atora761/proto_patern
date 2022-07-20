#include "../include/PaternSlalom.h"

PaternSlalom::PaternSlalom(){
    distance=0;
}

PaternSlalom::~PaternSlalom(){}

int8 PaternSlalom::decide(){
    int8 slalomstate=0;
    UltraSonic ultrasonic = UltraSonic::getInstance();
    distance=ultrasonic.getDistance();
    //黄色
    if(distance<10){
        slalomstate=SLALOMPATERNA;
    }else{
        slalomstate=SLALOMPATERNB;
    }
    return slalomstate;
}