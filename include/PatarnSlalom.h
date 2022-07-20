#pragma once
#define SLALOMPATERNA 1
#define SLALOMPATERNB 2
#include <cstdint>
#include <string.h>
#include <memory>
#include <string>
#include "ev3api.h"
#include "system.h"
class PaternGarage:public Comparison
{
private:
    int16 distance;
public:
    PaternGarage();

    ~PaternGarage();

    int8 decide(); 
};
