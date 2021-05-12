#include "summ2.h"

double summ2(double eps)
{
	double s = 0;

	for (int i = 0; fabs(a(i)) > eps; i++)
	{
		s += a(i);
	}

	return s;
}