#include "point.h"
#include <iostream>
#include <cmath>
using namespace std;

Point::Point(){
	x = 0;
	y = 0;
}

Point::Point(float x, float y){
	x = x;
	y = y;
}

void Point::setX(float _x)
{
    x = _x;
}
float Point::getX(void)
{
    return x;
}
void Point::setY(float _y)
{
    y = _y;
}
float Point::getY(void)
{
    return y;
}
void Point::setXY(float _x, float _y)
{
    x = _x;
    y = _y;
}
void Point::print(void)
{
    std::cout<< "(" << x << ", " << y << ")" << endl;
}
float Point::norma()
{
    return(sqrt(x*x+y*y));

}

Point Point::translada(float a, float b)
{
    Point res;
    res.x = x + a;
    res.y = y + b;
    return res;

}
Point Point::add(Point p1)
{
    Point res;
    res.x = x + p1.x;
    res.y = y + p1.y;
    return res;
}
Point Point::sub(Point p1)
{
    Point res;
    res.x = x - p1.x;
    res.y = y - p1.y;
    return res;
}
