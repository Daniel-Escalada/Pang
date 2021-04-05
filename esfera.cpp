#include "freeglut.h"
#include "esfera.h"
void Esfera::setRadio(float r)
{
	if (r < 0.1f) r = 0.1f;
}
void Esfera::setColor(unsigned char r, unsigned char v, unsigned char a)
{
	rojo = r;
	verde = v;
	azul = a;
}
void Esfera::setPos(float ix, float iy)
{
	x = ix;
	y = iy;
}