#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Enter
 * Return: Always 0 (Excellent)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d is", n);
	if  (n > 0)
		printf("positive\n");
	else if (n < 0)
		printf("negative\n");
	else 
		printf("zero\n");
	return (0);

