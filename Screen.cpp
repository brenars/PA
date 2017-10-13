#include "Screen.h"
#include "Circulo.h"
#include "FiguraGeometrica.h"
#include "reta.h"
#include "Retangulo.h"

#include <iostream>

Screen::Screen(int nlin, int ncol)
{
    ncol = ncol;
    nlin = nlin;
    mat.resize(nlin);
    for ( int i = 0 ; i < nlin ; i++ )
        mat[i].resize(ncol);
    for(int i=0; i<nlin; i++)
    {
        for(int j=0; j<ncol; j++)
        {
            mat[i][j] = ' ';
        }
    }
}

void Screen::clear()
{
    for(int i=0; i<nlin; i++)
    {
        for(int j=0; j<ncol; j++)
        {
            mat[i][j] = ' ';
        }
    }
}

void Screen::setBrush(char brush)
{
    brush = brush;
}

void Screen::setPixel(int x, int y)
{
    mat[y][x] = brush;
}

ostream& operator<<(ostream &os, Screen &t)
{
    os<<"|";
    for(int i=0; i<2*t.ncol-1; i++)
    {
        os <<"=";
    }
    os <<"|"<<endl;

    for(int i=0; i<t.nlin; i++)
    {
        for(int j=0; j<t.ncol; j++)
        {

            os << " " << t.mat[i][j];

        }
        os << endl;
    }

    os <<"|";
    for(int i=0; i<2*t.ncol-1; i++)
    {
        os <<"=";
    }
    os <<"|"<<endl;
    return os;
}
