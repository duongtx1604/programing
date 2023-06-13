#include <stdio.h>

int main(void)
{
	int i,y;
	for (i = 0; i < 5; i++)
	{
		for (y = 0; y < 5; y++)
		{
			if (i == y)
			{
				printf("*");
			}
			else if (i + y == 4)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}

