#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * File: 0-positive_or_negative.c
 *
 * Author: Achraf Assouam
 *
 * Date: 6th October 2023
 *
 * main - generate randome numbers and give them a sign
 *
 * Description: Print Positive, Zero or Negative
 *              Depending on the number generated.
 *
 * return: 0 if everying run correctly
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}
