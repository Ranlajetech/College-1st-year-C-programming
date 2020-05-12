#include <stdio.h>

int maxdivisor(int a, int b) //GCD
{
	if (a && b)
	{
		while (1)
		{
			if ((a %= b) == 0)
				return b;
			if ((b %= a) == 0)
				return a;
		}
	}
	else
		return 0;
}

int main()
{
	int i, j;
	scanf("%d%d", &i, &j);
	printf("%d\n", maxdivisor(i, j));
	return 0;
}
