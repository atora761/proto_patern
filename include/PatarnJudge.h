#pragma once
#define SLALOM 1
#define GARAGE 2
#include <cstdint>
#include <string.h>
#include <memory>
#include <string>
#include "ev3api.h"
#include "system.h"
//判定のクラス名追加が必要
class PaternJudge
{
private:
    int8 slalomPatarn;
    int8 garagePatarn;
public:
    PaternJudge();

    ~PaternJudge();

    int8 Judge(int8);
    int8 getSlalom();
    int8 getGarage();
};