#include <stdio.h>
#include <string.h>

int main(void)
{
	int a = 10;
	int* p = &a;
	*p = 20;
	printf("%d\n", a);
}

