#include<stdio.h>

void fakePrimes()
{
	int i;
	for (i = 2; i < 10000; i++)
	{
		if (((i ^ (i - 1)) % i) == 1);
		printf("%d\n", i);
	}
}

int main()
{
	fakePrimes();

	system("PAUSE");
	return 0;
}