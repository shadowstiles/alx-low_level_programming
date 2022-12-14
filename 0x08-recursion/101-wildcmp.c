#include "main.h"

/**
 * wildcmp - compare two strings with "wildcard expansion"
 * @s1: string 1
 * @s2: string 2
 * Return: 1 || 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s1 == '\0' || *s2 == '\0')
	{
		if (*s1 == '\0' && *s2 == '*')
			return wildcmp(s1, ++s2);
		else if (*s1 == '*' && *s2 == '\0')
			return wildcmp(++s1, s2);
		return (0);
	}

	if (*s1 == *s2)
	{
		return wildcmp(++s1, ++s2);
	}
	else if (*s1 == '*')
	{
		if (*(s1 + 1) == '*')
			return wildcmp(++s1, s2);
		else
		{
			return wildcmp(s1, find(s2, *(s1 + 1), 0, 0) + s2);
		}
	}
	else if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return wildcmp(s1, ++s2);
		else
		{
			return wildcmp(s1 + find(s1, *(s2 + 1), 0, 0), s2);
		}
	}

	return (0);

}

/**
 * find - Find Source
 * @s: string
 * @c: Character
 * @i: count
 * @p: interger
 * Return: 1 || 0
 */

int find(char *s, char c, int i, int p)
{
	if (*(s + i) == '\0')
		return (p + 1);
	else if (*(s + i) == c || *(s + i) == '*')
		p = i;

	return (find(s, c, i + 1, p));
}
