#pragma once
#include"shape.h"
class transform
{
public:
	void shift(Line& shape, int m, int n);
	void shift(Sqr& shape, int m, int n);
	void shift(Cube& shape, int m, int n, int k);
	void scaleX(Line& shape, int a);
	void scaleX(Sqr& shape, int a);
	void scaleX(Cube& shape, int a);
	void scaleY(Line& shape, int d);
	void scaleY(Sqr& shape, int d);
	void scaleY(Cube& shape, int d);
	void scaleZ(Cube& shape, int e);
	void scale(Line& shape, int s);
	void scale(Sqr& shape, int s);
	void scale(Cube& shape, int s);
};