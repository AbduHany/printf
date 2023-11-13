#include "main.h"
/**
 * _printreverse - pritns the argument in reverse
 * @args: the arument to be printed
 * Return: the number of charceters printed
*/
int _printreverse(va_list args)
{
	char *ptr;
	int i = 0, len = 0, counter = 0;

	ptr = va_arg(args, char*);
	if (ptr == NULL)
	{
		return (-1);
	}
	if (*ptr == '\0')
	{
		return (0); /* Empty string, nothing to reverse */
	}

	while (ptr[i] != '\0')
	{
		len++;
		i++;
	}

	for (i = (len - 1); i >= 0; i--)
	{
		counter = counter + writechar(ptr[i]);
	}
	return (counter);
}
