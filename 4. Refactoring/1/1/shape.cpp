#define _USE_MATH_DEFINES
#include"shape.h"
#include<cmath>


Line::Line(int _x1, int _x2, int _y1, int _y2) : x1(_x1), x2(_x2), y1(_y1), y2(_y2) {
	setSquare();
	setVolume();
}
void Line::setSquare() {
	square = 0;
}
void Line::setVolume() {
	volume = 0;
}


Sqr::Sqr(int _x1, int _x2, int _x3, int _x4, int _y1, int _y2, int _y3, int _y4) : x1(_x1), x2(_x2), y1(_y1), y2(_y2), x3(_x3), x4(_x4), y3(_y3), y4(_y4) {
	a = abs(x1 - x2);
	b = abs(y1 - y2);
	setSquare();
	setVolume();
}
void Sqr::setSquare() {
	square = a * b;
}
void Sqr::setVolume() {
	volume = 0;
}


Cube::Cube(int _x1, int _y1, int _z1, int _x2, int _y2, int _z2, int _x3, int _y3, int _z3, int _x4, int _y4, int _z4, int _x5, int _y5, int _z5, int _x6, int _y6, int _z6, int _x7, int _y7, int _z7, int _x8, int _y8, int _z8) 
	: x1(_x1), x2(_x2), y1(_y1), y2(_y2), x3(_x3), x4(_x4), y3(_y3), y4(_y4), x5(_x5), x6(_x6), x7(_x7), x8(_x8), y5(_y5), y6(_y6), y7(_y7), y8(_y8), z1(_z1), z2(_z2), z3(_z3), z4(_z4), z5(_z5), z6(_z6), z7(_z7), z8(_z8) {
	a = abs(x1 - x2);
	b = abs(y1 - y2);
	c = abs(z1 - z2);
	setSquare();
	setVolume();
}
void Cube::setSquare() {
	square = 2 * a * b + 2 * a * c + 2 * b * c;
}
void Cube::setVolume() {
	volume = a * b * c;
}


Circle::Circle(int _x1, int _y1, double _radius) : x1(_x1), y1(_y1), radius(_radius) {
	setSquare();
	setVolume();
}
void Circle::setSquare() {
	square = M_PI * radius * radius;
}
void Circle::setVolume() {
	volume = 0;
}

Cylinder::Cylinder(int _x1, int _y1, double _radius, double _height) : x1(_x1), y1(_y1), radius(_radius), height(_height) {
	setSquare();
	setVolume();
}
void Cylinder::setSquare() {
	square = M_PI * radius * radius + 2 * radius * height;
}
void Cylinder::setVolume() {
	volume = M_PI * radius * radius * height;
}