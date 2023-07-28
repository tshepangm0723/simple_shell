#include "shell.h"

/*****
 *_strncpy - a function that copies a string.
 *@dest: the destination of the string to be copied too.
 *@src: asource string.
 *@n: an amount of characters that will be copied.
 *Return: the concatenated string to print
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	while (src[i] != '\0' && i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		j = i;
		while (j < n)
		{
			dest[j] = '\0';
			j++;
		}
	}
	return (s);
}

/*****
 **_strncat - a function to concatenates two strings.
 *@dest: the first string.
 *@src: a second string
 *@n: the amount of bytes to be maximally used
 *Return: the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (j < n)
		dest[i] = '\0';
	return (s);
}

/******
 *_strchr - the function that locates a character in a string.
 * @s: the string to be parsed
 * @c: the character to look for
 * Return: (s) a pointer to the memory area s
 */
char *_strchr(char *s, char c)
{
	do
	{
		if (*s == c)
			return (s);
	}
	while (*s++ != '\0');

	return (NULL);
}
