#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: A input string
 * Return: Nothing
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	return (length);
}
