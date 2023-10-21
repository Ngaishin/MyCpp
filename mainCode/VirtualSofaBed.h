#ifndef _SOFABED_H_
#define _SOFABED_H_
#include <iostream>
#include "VirtualBed.h"
#include "VirtualSofa.h"ss



class sofabed : public sofa, public bed
{
public:
    sofabed(float len, float wide, float height);

private:
};

#endif