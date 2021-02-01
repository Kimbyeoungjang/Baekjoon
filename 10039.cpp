#include <stdio.h>

int main()
{
	int A[5], B = 0;

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &A[i]);
		if (A[i] < 40)
		{
			A[i] = 40;
		}

		B += A[i];

	}

	printf("%d", B / 5);

	return 0;
	
}