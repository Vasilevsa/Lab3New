#include "findFirstElement.h"

int findFirstElement(double eps)
{
	int num = 0;

	for (int i = 0; true; i++)
	{
		if (fabs(a(i)) <= eps) {
			num = i;
			break;
		}
	}

	return num;
}