#include <stdio.h>

void sum(int n);

int main(void)
{
	sum(10);
	sum(100); return 0;
}
void sum(int n)
{
	int i, tot = 0;
	for (i = 1; i <= n; i++)
	{
		tot += i;
	}
	printf("1 - %d, SUM:   %d\n", n, tot);
}

