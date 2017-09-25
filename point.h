#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

class Point{
private:
    float x, y;
public:

	Point();
	Point(float x,float y);
    void setX(float _x); //define o valor de x
    float getX(void); //recupera o valor de x
    void setY(float _y); //define o valor de y
    float getY(void); //recupera o valor de y
    void setXY(float _x, float _y);
    void print(void); //imprime
    float norma();  //calcula a norma

    Point translada(float a, float b); //rotaciona
    Point add(Point p1); //soma um ponto
    Point sub(Point p1); //subtrai um ponto


	friend class Poligono;
};


#endif // POINT_H_INCLUDED
