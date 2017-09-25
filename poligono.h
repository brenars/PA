#ifndef POLIGONO_H_INCLUDED
#define POLIGONO_H_INCLUDED
#include "point.h"


class Poligono
{
protected:
    Point *vertice;
    int n;
public:
    Poligono();
    void inserir(Point a); //inserir os pontos no poli
    int getV(); //recuperar o num de pontos
    float area(float _area); //calcular a area
    void translada_poli(float a,float b); //transladar
    void rotaciona(double teta, Point p); //rotacionar
    void print_poli(); //imprimir formatado

};


#endif // POLIGONO_H_INCLUDED
