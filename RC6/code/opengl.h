#ifndef OPENGL_H
#define OPENGL_H
#include <iostream>
#include <cmath>
#include <ctime>
//#include <GL/glut.h>
#include <vector>
#include <unistd.h>
using namespace std;

static const int draw_circle_num=200;
static const double PI=3.14159265;
static const double default_alpha =0.8;

class Vec {
private:
    double x, y;
public:
    Vec();
    ~Vec()= default;
    Vec(double _x , double _y);
    void print();
    double getX();
    double getY();
    Vec operator + (Vec v);
    Vec operator - (Vec v);
    Vec operator * (double k);
    double operator * (Vec v);
    Vec operator >> (double k);
    Vec operator << (double k);
};



#endif
//-lglu32 -lfreeglut -lopengl32