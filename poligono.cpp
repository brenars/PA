#include "Poligono.h"
#include <iostream>
#include <cmath>

using namespace std;

Poligono::Poligono()
{
    n=0;
    vertice = new Point[100];
}
void Poligono::inserir(Point v)
{
    vertice[n++] = v;
}
int Poligono::getV()
{
    return n;
}
float Poligono::area(float _area)
{
    float aux1=0, aux2=0;

    int k = 100;
    for(int i=0; i<k-1; i++)
    {
        aux1 +=  vertice[i].x * vertice[i+1].y;
        aux2 += vertice[i].y * vertice[i+1].x;
    }
    if (aux1>aux2)
    {
        _area = (aux1 - aux2)/2;
    }
    else
    {
        _area = (aux1 - aux2)/2;
    }
    return _area;
}
void Poligono::translada_poli(float a,float b)
{
    for(int i=0; i<n; i++)
    {
        vertice[i].translada(a, b);
    }
}
void Poligono::rotaciona(double angulo , Point p0)
{
    Point aux;
    float tx;
    for(int i=0; i<n; i++)
    {
        aux = vertice[i].sub(p0);


        tx = aux.x;
        aux.setX(tx*cos(angulo) - aux.y*sin(angulo));
        aux.setY(tx*sin(angulo) + aux.y*cos(angulo));

        aux = aux.add(p0);

        this->vertice[i].setX(aux.x);
        this->vertice[i].setY(aux.y);
    }
}
void Poligono::print_poli(){
	for(int i=0; i<n-1; i++)
    {
        cout<< "(" << vertice[i].x << ", " << vertice[i].y << ")->";
    }
    cout<< "(" << vertice[0].x << ", " << vertice[0].y << ")"<<endl;

}
