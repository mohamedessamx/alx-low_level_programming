#include <stdio.h>
#include <stdlib.h>

int _isdigit(char *str);
int _strlen(char *str);
void _multiply(char *num1, char *num2);
void _print_result(char *result);
/**
 * main - multply two number
 * @argc: int
 * @argv: list
 * Return: 0
 */
int main(int argc, char *argv[])
{
char *num1, *num2;

if (argc != 3)
{
	printf("Error\n");
	return (98);
}
num1 = argv[1];
num2 = argv[2];
if (!_isdigit(num1) || !_isdigit(num2))
{
	printf("Error\n");
	return (98);
}
_multiply(num1, num2);
return (0);
}
/**
 * _isdigit - change from char to int
 * @str: char to change
 * Return: 1
 */
int _isdigit(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
	if (str[i] < '0' || str[i] > '9')
		return (0);
}
return (1);
}
/**
 * _strlen - find the length of string
 * @str: string to measure
 * Return: size of string
 */
int _strlen(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
	;
return (i);
}
/**
 * _multiply - multply two number
 * @num1: first number
 * @num2: second number
 * Return: nothing
 */
void _multiply(char *num1, char *num2)
{
int len1, len2, i, j, k;
int *result;
int carry, n1, n2, sum;

len1 = _strlen(num1);
len2 = _strlen(num2);
result = calloc(len1 + len2, sizeof(int));
for (i = len1 - 1; i >= 0; i--)
{
	n1 = num1[i] - '0';
	carry = 0;
	k = len2 + i;
	for (j = len2 - 1; j >= 0; j--)
	{
		n2 = num2[j] - '0';
		sum = n1 * n2 + result[k] + carry;
		carry = sum / 10;
		result[k] = sum % 10;
		k--;
	}
	if (carry > 0)
		result[k] += carry;
}
_print_result(result);
free(result);
}
/**
 * _print_result - print the result of multiplication
 * @result: int
 * Return: nothing
 */
void _print_result(char *result)
{
int i = 0;

while (result[i] == 0)
	i++;
if (i == _strlen(result))
	printf("0\n");
else
{
	for (; i < _strlen(result); i++)
		printf("%d", result[i]);
	printf("\n");
}
}
