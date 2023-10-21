#ifndef _SOFA_H_
#define _SOFA_H_
#include <iostream>
#include "VirtualFurniture.h"


class sofa : virtual public furniture
{
public:
    sofa(float _len = 0, float _wide = 0, float _height = 0);

};

#endif