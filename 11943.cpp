#include <stdio.h>

int main()
{
	int A, B, C, D;

	scanf("%d %d", &A, &B); //A는 사과, B는 오렌지
	scanf("%d %d", &C, &D); //C는 사과, D는 오렌지

	if (A + D <= B + C)
	{
		printf("%d\n", A + D);
	}
	else
	{
		printf("%d\n", C + B);
	}

	return 0;
}