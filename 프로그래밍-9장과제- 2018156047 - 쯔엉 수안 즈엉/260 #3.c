#include <stdio.h>
#include <string.h>

int main(void)
{
	int a = 10, b = 20;
	int *pa = &a, *pb = &b, *pt;
	pt = pa;
	pa = pb;
	pb = pt;
	printf("%d, %d\n", *pa, *pb);
}

