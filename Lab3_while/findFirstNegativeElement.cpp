#include "findFirstNegativeElement.h"

int findFirstNegativeElement(double eps) 
{
	int sch = 0;

	while (true)
	{
		if (a(sch) < 0 && fabs(a(sch)) <= eps) 
			return sch;

		++sch;
	}
}