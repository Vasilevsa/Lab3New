#include "print.h"

void print(int n, int k)
{
	int sch = 0;

	for (int i = 0; i < n; i++)
	{
		++sch;
		if (sch % k == 0)
			continue;
		else
			std::cout << a(i) << " ";
	}
}