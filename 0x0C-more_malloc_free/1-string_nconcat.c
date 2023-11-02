#include <stdlib.h>

/**
* string_nconcat - concatenates two strings and returns memory
* @s1: first striing
* @s2: second string
* @n: bytes to concatenate
*
* Return: a pointer to allocatedmemory
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *result;
unsigned int len1 = 0, len2 = 0, i = 0, j = 0;
while (s1 != NULL && *(s1 + len1) != '\0')
{
len1++;
}
while (s2 != NULL && *(s2 + len2) != '\0')
{
len2++;
}
result = malloc(sizeof(char) * (len1 + n + 1));
if (result == NULL)
{
return (NULL);
}
for (i = 0; i < len1; i++)
{
*(result + i) = *(s1 + i);
}

for (j = 0; j < n && j < len2; j++)
{
switch (s2 != NULL)
{
case 1:
*(result + i + j) = *(s2 + j);
break;
case 0:
*(result + i + j) = '\0';
break;
}
}
*(result + i + j) = '\0';
return (result);
}
