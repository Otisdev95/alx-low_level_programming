#include "main.h"

/**
 * _strchr - function that locates a character in  string
 * @s: string to receive an return
 * @c: character to receive
 * Return: char
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (c);
		s++;
	}
	if (*s == c)
		return (s);
	else
		return (NULL);
}
