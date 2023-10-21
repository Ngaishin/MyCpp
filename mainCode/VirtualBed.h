#ifndef _BED_H_
#define _BED_H_
#include <iostream>
#include "VirtualFurniture.h"


class bed:virtual public furniture
{
public:
    bed(float _len=0, float _wide=0, float _height=0);
    

};

#endif