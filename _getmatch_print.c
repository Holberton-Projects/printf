#include "holberton.h"

/**
 * _getmatch_print - selects the correct func to perform the operation
 * sked by the user
 * @s: operator passed as arguement to program
 * Return: a pointer to the function
 */

int (*_getmatch_print(char *s))(va_list)
{
	format_t matchs[] = {
	    {"c", _printChar},
	    {"s", _printString},
	    {"d", _printInt},
	    {"i", _printInt},
	    {NULL, NULL}};
	unsigned int i;

	i = 0;

	while (matchs[i].op)
	{
		if (_strcmp(s, (matchs[i].op)) == 0)
		{
			return (*(matchs[i]).j);
		}
		i++;
	}
	return (NULL);
}
