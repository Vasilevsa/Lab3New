#include "summ.h"

double summ(int n)
{
	double s = 0;
	int sch = 0;

	if (n != 0)
	{
		do
		{
			s += a(sch);
			++sch;
		} while (sch < n);		
	}
	
	return s;
}