#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check - string there are digit
 * @str: array str
 *
 * Return: Always 0 (Success)
 */
int check_num(char *str)
{
	/*Declaring variables*/
	int count;

	count = 0;
	while (str[count]) /* count string*/

	{
		if (str[count] < '0' || str[count] > '9') /*check if str there are digit*/
		{
			return (0);
		}

		count++;
	}
	return (1);
}

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	/*Declaring valiables*/
	int count;
	int str_to_int;
	int sum = 0;

	if (argc < 2)
	{
		printf("%d\n", 0);
		return (0);
	}
	count = 1;
	while (count < argc) /*Goes through the whole array*/
	{
		str_to_int = atoi(argv[count]); /*ATOI --> convert string to int*/
		if (check_num(argv[count]))
		{
			sum += str_to_int;
		}
		/*Condition if one of the number contains symbols that are not digits*/
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum); /*print sum*/

	return (0);
}
