#include "findFirstElement.h"

int findFirstElement(double eps)
{
	int num = 0;

	do
	{
		if (fabs(a(num)) <= eps) {
			break;
		}
		++num;
	} while (true);

	return num;
}