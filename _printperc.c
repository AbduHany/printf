#include "main.h"

/**
 * _printperc - prints a percent sign.
 *
 * Return: number of bytes printed.
 */
int _printperc(void)
{
	char c = '%';  /*what if it is a ? or a ! , what would it print */

	return (writechar(c));
}
