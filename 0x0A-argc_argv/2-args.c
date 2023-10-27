#include <stdio.h>
/**
 *
 *
 *
 */
int main(int argc, char *argv[])
{
	int v;

	v = 0;

	while (v < argc)
	{
		printf("%s\n", argv[v]);
		v++;
	}
	return (0);
}
