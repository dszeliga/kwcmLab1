#include "trygonometria.h"
#include <cmath>

double getRadian(double degree) {
	return degree * 3.14 / 180;
}
double degreemath::sin(double degree) {

	return std::sin(getRadian(degree));
}

double degreemath::cos(double degree)
{
	return std::cos(getRadian(degree));
}
double degreemath::tg(double degree)
{
	return std::tan(getRadian(degree));
}
double degreemath::ctg(double degree)
{
	return 1/ degreemath::tg(degree);
}