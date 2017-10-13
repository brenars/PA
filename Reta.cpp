#include "Reta.h"
#include "screen.h"

#include <cmath>
#include <iostream>

using namespace std;

Reta::Reta(float x1, float y1, float x2, float y2)
{
    x1 = x1;
    y1 = y1;
    x2 = x2;
    y2 = y2;
}
void Reta::draw(Screen &t)
{
    float step, xinc, yinc;
    float x, y;
    int deltax = abs(x2 - x1);
    int deltay = abs(y2 - y1);
    if(deltax >= deltay)
    {
        step = deltax;
    }
    else
        step = deltay;
    xinc = deltax/step;
    yinc = deltay/step;
    x = x1;
    y = y1;

    for(int i=0; i<step; i++)
    {
        t.setPixel(round(x),round(y));
        x+=xinc;
        y+=yinc;
    }

}
