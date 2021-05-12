#include "print.h"

void print(int n, int k)
{
	int sch = 0;

	if (n != 0) {
		do
		{
			if ((sch + 1) % k == 0) {
				++sch;
				continue;
			}
			else {
				std::cout << a(sch) << " ";
				++sch;
			}
		} while (sch < n);
	}

}