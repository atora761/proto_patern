#pragma once
enum GarageColor
{
  YELLOWTHRESHOL
  REDTHRESHOLD 
  GREENTHRESHOLD
  BLUETHRESHOLD 
};

#include <cstdint>
#include <string.h>
#include <memory>
#include <string>
#include "ev3api.h"
#include "system.h"
class PaternSlalom:public Comparison
{
private:
    RGB_DATA rgb;
public:
    PaternSlalom();

    ~PaternSlalom();

    int8 decide(); 
};