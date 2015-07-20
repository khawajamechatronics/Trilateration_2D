#ifndef __TRI_2D_H__
#define __TRI_2D_H__
#include <opencv\highgui.h>
#include <opencv\cv.h>
#include <math.h>

CvPoint Trilateration_2D(CvPoint Anchor1, CvPoint Anchor2, CvPoint Anchor3, double r1, double r2, double r3);
double square(double x);
#endif