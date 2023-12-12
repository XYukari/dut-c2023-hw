#define _USE_MATH_DEFINES

#include "graph.h"
#include <math.h>

double getRectGirth(const Rect_st* pRect)
{
	double girth = (pRect->width + pRect->height) * 2;
	return girth;
}

double getRectArea(const Rect_st* pRect)
{
	double area = pRect->height * pRect->width;
	return area;
}
double getTriangleGirth(const Triangle_st* pTriangle)
{
	double girth = pTriangle->side1 + pTriangle->side2 + pTriangle->side3;
	return girth;
}

double getTriangleArea(const Triangle_st* pTriangle)
{
	double halfGirth = getTriangleGirth(pTriangle) / 2;
	double area = sqrt(halfGirth
		* (halfGirth - pTriangle->side1)
		* (halfGirth - pTriangle->side2)
		* (halfGirth - pTriangle->side3));
	return area;
}

double getCircleGirth(const Circle_st* pCircle)
{
	double girth = 2 * M_PI * pCircle->radius;
	return girth;
}

double getCircleArea(const Circle_st* pCircle)
{
	double area = M_PI * pCircle->radius * pCircle->radius;
	return area;
}