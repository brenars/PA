#include "Retangulo.h"
#include <iostream>


Retangulo::Retangulo(float x, float y, float altura, float largura)
{
    Point p2;// ponto auxiliar para usar no metodo inserir
    x = x;
    y = y;
    altura = altura;
    largura = largura;

    CdM.setX(x + largura/2);
    CdM.setY(y - altura/2);


    aux = Point(x,y);
    inserir(p2);
    aux.translada(largura, 0);
    inserir(p2);
    aux.translada(0, -altura);
    inserir(p2);
    aux.translada(-largura, 0);
    inserir(p2);

}

void Retangulo::translada(float a,float b)
{
    int i;
    for(i=0; i<N; i++)
    {
        vertice[i].translada(a, b);
    }
    CdM.translada(a, b);
}

Point Retangulo::getCdM()
{
    return CdM;
}
