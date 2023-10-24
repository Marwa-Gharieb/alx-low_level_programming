#include "main.h"

/**
* _strspn - gets the length of a prefix sunstring
* @s: longer string
* @accept: shorter string
* Return: i or the length
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
{
	for (j = 0; accept[j] != '\0'; j++)
{
	if (s[i] != accept[j])
	break;

	if (accept[j] == '\0')
	return (i);
}
	return (i);
}
