#pragma once
#include "Alive.h"

class Animal : public Alive
{
protected:
    char country[20];
public:
    void vid();
    void input();
    void output();
};