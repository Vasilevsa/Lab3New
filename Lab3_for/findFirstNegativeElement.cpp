#include "findFirstNegativeElement.h"

int findFirstNegativeElement(double eps)
{
	for (int i = 0; true; i++)
	{
		if (a(i) < 0 && fabs(a(i)) <= eps) 
			return i;
	}
}