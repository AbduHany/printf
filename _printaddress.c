#include "main.h"
/**
 * _printaddress - printing the address in a 12
 * digit hexa decimal syntax
 * @args: the argument it would work on
 * Return: the number of charecters printed
*/
int _printaddress(va_list args)
{
	unsigned long int  num, temp;
	int len = 0, rem, counter = 0, i = 0, j;
	char *ptr, *prefix = "0x";

	num = va_arg(args, unsigned long int);
	if (num == 0)
		return (writestr("(nil)", 5));
	temp = num;
	while (temp != 0) /* getting the lenght of the binary conversion*/
	{
		temp = temp / 16;
		len++;
	}
	ptr = malloc(sizeof(char) * (len + 2));
	if (ptr == NULL)
		return (-1);
	while (num != 0)
	{
		rem = num % 16;
		if ((rem > 9) && (rem < 16))
		{
			ptr[i] = character_replace_s(rem);
		}
		else if (rem >= 0 && rem <= 9)
		{
			ptr[i] = rem + '0';
		}
		i++;
		num = num / 16;
	}
	j = 1;
	while (j >= 0)
		ptr[i++] = prefix[j--];
	for (i = (len + 2 - 1); i >= 0; i--) /*printing the string in ptr*/
		counter = counter + writechar(ptr[i]);
	free(ptr);
	return (counter);
}
