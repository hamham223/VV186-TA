#include "parkinglot.h"
Vec :: Vec(double _x , double _y){
    x = _x;y = _y;
}
Vec :: Vec(){
    x = -1.2;y = -0.3;
}
void Vec :: print(){
    std :: cout << "Vector: x = "  << x << ", y = " << y << std ::endl;
}
double Vec :: getX(){ return x;}
double Vec :: getY(){ return y;}
Vec Vec :: operator + (Vec v){
    return Vec(x + v.getX(), y + v.getY());
}
Vec Vec :: operator - (Vec v) {
    return Vec(x - v.getX(), y - v.getY());
}
Vec Vec :: operator * (double k) { return Vec(k * x, k * y);}
double Vec :: operator * (Vec v) {
    return v.getX() * x + v.getY() * y;
}
Vec Vec :: operator >> (double k) {
    return Vec(x * (double)cos(k) + y * (double)sin(k), (double)cos(k) * y - (double)sin(k) * x);
}
Vec Vec :: operator << (double k) {
    return Vec(x * (double)cos(k) - y * (double)sin(k), (double)cos(k) * y + (double)sin(k) * x);
}