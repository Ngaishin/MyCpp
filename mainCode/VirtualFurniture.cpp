#include "VirtualFurniture.h"
#include <iostream>
using namespace std;

furniture::furniture(float _len, float _wide, float _height)
    : len(_len), wide(_wide), height(_height)
{
}

void furniture::dis()
{
    cout << "len   : " << this->len << endl;
    cout << "wide  : " << this->wide << endl;
    cout << "height: " << this->height << endl;
}