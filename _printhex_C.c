#include "main.h"
/**
 * character_replace_C - replaces numbers from 10 tp 15
 * with their hexa decimal coresspondings in CAPITAL letters
 *
 * @hexaNum: the number to be replaces
 *
 * Return: the hexadecimal digit
 */

char character_replace_C(int hexaNum)
{
	char result;

		switch (hexaNum)
		{
		case 10:
			result = 'A';
			break;
		case 11:
			result = 'B';
			break;
		case 12:
			result = 'C';
			break;
		case 13:
			result = 'D';
			break;
		case 14:
			result = 'E';
			break;
		case 15:
			result = 'F';
			break;
		default:
			result = '\0';  /* for invalid input */
			break;
		}

	return (result);
}

/**
 * _printhexa_C - print int argument in hexadecimal CAPITAL letters.
 * @args: va_list variable.
 *
 * Return: number of bytes printed.
 */
int _printhexa_C(va_list args)
{
	unsigned int  num, temp;
	int len = 0, rem, counter = 0, i = 0;
	char *ptr;

	num = va_arg(args, unsigned int);
	if (num == 0)
		return (writechar('0'));
	temp = num;
	while (temp != 0) /* getting the lenght of the binary conversion*/
	{
		temp = temp / 16;
		len++;
	}
	if (len == 0)
		return (0);
	ptr = malloc(sizeof(char) * len);
	if (ptr == NULL)
		return (-1);
	while (num != 0)
	{
		rem = num % 16;
		if ((rem > 9) && (rem < 16))
		{
			ptr[i] = character_replace_C(rem);
		}
		else if (rem >= 0 && rem <= 9)
		{
			ptr[i] = rem + '0';
		}
		i++;
		num = num / 16;
	}
	for (i = (len - 1); i >= 0; i--) /*printing the string in ptr*/
	{
		counter = counter + writechar(ptr[i]);
	}
	free(ptr);
	return (counter);
}

