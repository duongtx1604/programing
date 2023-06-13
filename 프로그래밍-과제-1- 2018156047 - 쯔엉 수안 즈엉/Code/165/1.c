#include <stdio.h>

int main(void)
{
	int a;
	do {
		printf("type a: ");
		scanf("%d", &a);
	} 
	while (a < 0);
	printf(" a = %d ",a);
	return 0;
}

