#include <stdio.h>

int main(void)
{
	int n;
	printf("type n:");
		scanf("%d", &n);
		switch (n % 3)
		{
		case 0:
			printf("yes");
			break;
		default:
			printf("no");
			break;
		}
	return 0;
}

