#include <stdio.h>
#include <stdlib.h>
/**
 * multiply - multply two number
 * @num1: first number
 * @num2: second number
 * Return: nothing
 */
void multiply(char *num1, char *num2)
{
int len1 = 0, len2 = 0, i, j;
int *result, carry, n1, n2, sum;

while (num1[len1])
	len1++;
while (num2[len2])
	len2++;
result = malloc(sizeof(int) * (len1 + len2));
if (result == NULL)
{
	printf("Error: Memory allocation failed\n");
	exit(98);
}
for (i = 0; i < len1 + len2; i++)
	result[i] = 0;
for (i = len1 - 1; i >= 0; i--)
{
	carry = 0;
	n1 = num1[i] - '0';
	for (j = len2 - 1; j >= 0; j--)
	{
		n2 = num2[j] - '0';
		sum = n1 * n2 + result[i + j + 1] + carry;
		result[i + j + 1] = sum % 10;
		carry = sum / 10;
	}
	if (carry > 0)
		result[i] += carry;
}
i = 0;
while (result[i] == 0 && i < len1 + len2 - 1)
	i++;
for (; i < len1 + len2; i++)
	printf("%d", result[i]);
printf("\n");
free(result);
}
/**
 * main - get the two digit
 * @argc: int
 * @argv: list
 * Return: 0
 */
int main(int argc, char *argv[])
{
if (argc != 3)
{
	printf("Error: Incorrect number of arguments\n");
	return (98);
}
char *num1 = argv[1];
char *num2 = argv[2];

/* Check if the numbers contain only digits*/
for (int i = 0; num1[i]; i++)
{
	if (num1[i] < '0' || num1[i] > '9')
	{
		printf("Error: Invalid input\n");
		return (98);
	}
}
for (int i = 0; num2[i]; i++)
{
	if (num2[i] < '0' || num2[i] > '9')
	{
		printf("Error: Invalid input\n");
		return (98);
	}
}
/* Multiply the numbers*/
multiply(num1, num2);
return (0);
}
