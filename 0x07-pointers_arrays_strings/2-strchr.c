#include "main.h"

/**
*_strchr - prints found c
*@s: pointer to char
*@c: char params to found
*Return: *S
*/

char *_strchr(char *s, char c)
{
	while (*s)
	{
		s++;
		if (*s == c)
		{
			return (s);
		}
	}
	return (0);
}

