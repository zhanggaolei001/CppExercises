#include <math.h>
#include "2-1-zhanggaolei.h"

bool get_polar_coordinates(double *x, double *y) {
	double c = sqrt(pow(*x, 2) + pow(*y, 2));
	double q = atan(*y / *x);
	*x = c;
	*y = q;
	return true;
}

double get_polar_coordinates_return_y_change_x(double* x, double y) {
	double c = sqrt(pow(*x, 2) + pow(y, 2));
	double q = atan(y / *x);
	*x = c;
	return q;
}

void get_polar_coordinates_quote(double &x, double &y) {
	double c = sqrt(pow(x, 2) + pow(y, 2));
	double q = atan(y / x);
	x = c;
	y = q; 
}