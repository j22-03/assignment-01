#include <stdio.h>

int main()
{
	int n, a, b, i = 1;
	int suma, sumb, sums = 0;

	printf("Enter three integers (ex. \"10 3 5\"): ");
	scanf("%d %d %d", &n, &a, &b);

	while (i < n)
	{
		suma = (a * i);
		sumb = (b * i);

		if (suma < n)
		{
			sums += suma;
		}
		if (sumb < n)
		{
			sums += sumb;
		}
		
		i++;
	}

	printf("%d\n", sums);

	return 0;
}
