#include <stdio.h>

/**
 *print_times_table
 *@n: biggest int of the times table
 */

void print_times_table(int n)
{
	int i;
	int j;
	int k;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				if (j != 0)
				{
					if (k >= 100)
					{
						printf("%d", k);
						if (j != n)
							printf(", ");
					}
					else if (k >= 10 && k < 100)
					{
						printf(" ");
						printf("%d", k);
						if (j != n)
							printf(", ");
					}
					else
					{
						printf("  ");
						printf("%d", k);
						if (j != n)
							printf(", ");
					}
				}
				else
				{
					printf("%d", k);
					printf(" ");
				}
			}
			printf("\n");
		}
		printf("\n");
	}
}
