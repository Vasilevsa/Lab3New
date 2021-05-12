#include "function.h"

double a(int i)
{
	return pow(-1, i) * (1 - (pow(i + 1, 2)) / (pow(i + 2, 2)));
}