#include <stdio.h>
#include <iostream>
#include <cstring>

int main()
{
	int i = 0, length = 0;

	char str[100];

	scanf("%s", str);

	length = strlen(str);

	for (i = 0; i < length; i++)
	{
		printf("%c", str[i]);

		if ((i + 1) % 10 == 0)
			printf("\n");
	}

	return 0;
}