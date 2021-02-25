#include <stdio.h>
void main()
{
	int i, j;
	for (i = 1; i <= 5; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf("*\t");
		};
		printf("\n");
	};
	for (i = 1; i <= 4; i++)
	{
		for (j = 1; j <= i; j++)
		{
			(i + j) % 2 == 0 ? printf("1") : printf("0");
		}
		printf("\n");
	}
};
