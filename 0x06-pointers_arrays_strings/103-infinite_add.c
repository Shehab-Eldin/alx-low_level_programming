#include "main.h"

/**
 * infinite_add - encodes a string in rot13
 * @n1: string to be encoded
 * @:
 * Return: the resulting strring
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j;

	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
				break;
			}
	    }
	}
	return (s);
}
