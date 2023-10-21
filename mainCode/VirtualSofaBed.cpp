#include "VirtualSofaBed.h"

sofabed::sofabed(float len, float wide, float height)
    : sofa(len, wide, height), bed(len, wide, height), furniture(len, wide, height)
{
}