#include <math.h>
#include "2-1-zhanggaolei.h"

void get_polar_coordinates_ptr(const double& x, const  double& y, double* c, double* q) {
	*c = sqrt(pow(x, 2) + pow(y, 2));
	*q = atan(y / x);
}

double get_polar_coordinates_return_y_change_x(const double& x, const double& y, double& c) {
	c = sqrt(pow(x, 2) + pow(y, 2));
	double q = atan(y / x);
	return q;
}

void get_polar_coordinates_quote(const double& x, const double& y, double& c, double& q) {
	  c = sqrt(pow(x, 2) + pow(y, 2));
	  q = atan(y / x);
}