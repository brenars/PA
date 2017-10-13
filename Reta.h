#ifndef RETA_H_INCLUDED
#define RETA_H_INCLUDED

#include "FiguraGeometrica.h"
#include "screen.h"

class Reta : public FiguraGeometrica
{
public:
    Reta(float x1=0, float y1=0, float x2=0, float y2=0);
    void draw(Screen &t);
private:
    int x1, x2, y1, y2;
};

#endif // RETA_H_INCLUDED
