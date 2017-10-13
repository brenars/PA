#ifndef RETANGULO_H_INCLUDED
#define RETANGULO_H_INCLUDED

#include "FiguraGeometrica.h"

class Retangulo : public FiguraGeometrica
{
public:
    Retangulo(int x=0,int y=0, int alt=0,int larg=0);
    void draw(Screen &t);
private:
    int x, y, altura, largura;
};

#endif // RETANGULO_H_INCLUDED
