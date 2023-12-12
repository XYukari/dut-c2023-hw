#pragma once
typedef struct {
	double width;
	double height;
}Rect_st;

typedef struct {
	double side1;
	double side2;
	double side3;
}Triangle_st;

typedef struct {
	double radius;
}Circle_st;

extern double getRectGirth(const Rect_st* pRect);
extern double getRectArea(const Rect_st* pRect);
extern double getTriangleGirth(const Triangle_st* pTriangle);
extern double getTriangleArea(const Triangle_st* pRect);
extern double getCircleGirth(const Circle_st* pCircle);
extern double getCircleArea(const Circle_st* pCircle);