#include "main.h"
/**
 * main - print number 1 - 100 followed by new line
 *	number that are multiples of 3 print Fizz
 *	number that are multiples of 5 print Buzz
 *	number that are multiples of 3 and 5 print FizzBuzz
 *	each number and word to be separated by space
 * Return: always 0 (success)
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && !(num % 5 == 0))
			printf("fizz");
		else if (num % 5 == 0 && !(num % 3 == 0))
			printf("buzz");
		else if (num % 3 == 0 && num % 5 == 0)
			printf("fizzbuzz");
		else
			printf("%d", num);
		if (num != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
