#include <stdio.h>

int lcm (int a, int b)
{
	int lcm = (a > b) ? a : b;

	while (1)
	{
		if (lcm % a == 0 && lcm % b == 0)
		{
			printf("LCM(%d, %d) = %d\n", a, b, lcm);
			return lcm;
		}
		lcm++;
	}
	return 0;
}

int main ()
{
	int res = 20;

	for (int i = 19; i > 0; i--)
	{
		res = lcm(res, i);
	}

	printf("FINAL RESULT: %d\n", res);

	return 0;
}
