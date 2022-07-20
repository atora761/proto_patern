#include "../include/PaternSlalom.h"

PaternSlalom(){}

~PaternSlalom(){}

int8 decide(){
    int8 slalomstate=0;
    UltraSonic ultrasonic = UltraSonic::getInstance();
    distance=ultrasonic.getDistance();
    //黄色
    if(distance<10){
        slalomstate=SLALOMPATERNA
    }else{
        slalomstate=SLALOMPATERNB
    }
    return slalomstate;
}