#include "transform.h"

void transform::shift(Line& shape, int m, int n) {
	shape.x1 += m; shape.y1 += n;
	shape.x2 += m; shape.y2 += n;
}
void transform::shift(Sqr& shape, int m, int n) {
	shape.x1 += m; shape.y1 += n;
	shape.x2 += m; shape.y2 += n;
	shape.x3 += m; shape.y3 += n;
	shape.x4 += m; shape.y4 += n;
}
void transform::shift(Cube& shape, int m, int n, int k) {
	shape.x1 += m; shape.y1 += n; shape.z1 += k;
	shape.x2 += m; shape.y2 += n; shape.z2 += k;
	shape.x3 += m; shape.y3 += n; shape.z3 += k;
	shape.x4 += m; shape.y4 += n; shape.z4 += k;
	shape.x5 += m; shape.y5 += n; shape.z5 += k;
	shape.x6 += m; shape.y6 += n; shape.z6 += k;
	shape.x7 += m; shape.y7 += n; shape.z7 += k;
	shape.x8 += m; shape.y8 += n; shape.z8 += k;
}
void transform::scaleX(Line& shape, int a) {
	shape.x1 *= a;
	shape.x2 *= a;
}
void transform::scaleX(Sqr& shape, int a) {
	shape.x1 *= a;
	shape.x2 *= a;
	shape.x3 *= a;
	shape.x4 *= a;
}
void transform::scaleX(Cube& shape, int a) {
	shape.x1 *= a;
	shape.x2 *= a;
	shape.x3 *= a;
	shape.x4 *= a;
	shape.x5 *= a;
	shape.x6 *= a;
	shape.x7 *= a;
	shape.x8 *= a;
}
void transform::scaleY(Line& shape, int d) {
	shape.y1 *= d;
	shape.y2 *= d;
}
void transform::scaleY(Sqr& shape, int d) {
	shape.y1 *= d;
	shape.y2 *= d;
	shape.y3 *= d;
	shape.y4 *= d;
}
void transform::scaleY(Cube& shape, int d) {
	shape.y1 *= d;
	shape.y2 *= d;
	shape.y3 *= d;
	shape.y4 *= d;
	shape.y5 *= d;
	shape.y6 *= d;
	shape.y7 *= d;
	shape.y8 *= d;
}
void transform::scaleZ(Cube& shape, int e) {
	shape.z1 *= e;
	shape.y2 *= e;
	shape.z3 *= e;
	shape.z4 *= e;
	shape.z5 *= e;
	shape.z6 *= e;
	shape.z7 *= e;
	shape.z8 *= e;
}
void transform::scale(Line& shape, int s) {
	shape.x1 /= s; shape.y1 /= s;
	shape.x2 /= s; shape.y2 /= s;
}
void transform::scale(Sqr& shape, int s) {
	shape.x1 /= s; shape.y1 /= s;
	shape.x2 /= s; shape.y2 /= s;
	shape.x3 /= s; shape.y3 /= s;
	shape.x4 /= s; shape.y4 /= s;
}
void transform::scale(Cube& shape, int s) {
	shape.x1 /= s; shape.y1 /= s; shape.z1 /= s;
	shape.x2 /= s; shape.y2 /= s; shape.z2 /= s;
	shape.x3 /= s; shape.y3 /= s; shape.z3 /= s;
	shape.x4 /= s; shape.y4 /= s; shape.z4 /= s;
	shape.x5 /= s; shape.y5 /= s; shape.z5 /= s;
	shape.x6 /= s; shape.y6 /= s; shape.z6 /= s;
	shape.x7 /= s; shape.y7 /= s; shape.z7 /= s;
	shape.x8 /= s; shape.y8 /= s; shape.z8 /= s;
}