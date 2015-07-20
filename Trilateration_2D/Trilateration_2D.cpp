
#include "Trilateration_2D.h"

double square(double x)
{
	return x*x;
}

CvPoint Trilateration_2D(CvPoint Anchor1, CvPoint Anchor2, CvPoint Anchor3, double r1, double r2, double r3)
{
	CvPoint tag = cvPoint(0,0);
	double d = Anchor2.x - Anchor1.x;
	double i = Anchor3.x;
	double j = Anchor3.y;

	double x, y;
	
	x = (square(r1)-square(r2)+square(d)) / (2 * d);
	y = (square(r1) - square(r3) + square(i) + square(j)) / (2 * j) - (i / j) * x;
	
	tag.x = (int)x;
	tag.y = (int)y;

	return tag;
}