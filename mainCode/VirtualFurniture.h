#ifndef _FURNITURE_H_
#define _FURNITURE_H_

class furniture
{
public:
    furniture(float _len = 0, float _wide = 0, float _height = 0);
    void dis();

    float len;
    float wide;
    float height;
};

#endif