#include "main.h"
#include <stdio.h>

/**
  * print_rot13 - encodes a string into rot13.
  *
  * @R: string to convert
  *
  * Return: size the output text
*/

int print_rot13(va_list R)
{
	int j, i, count = 0;
	char *r;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz ";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm ";

	r = va_arg(R, char *);
	if (r == NULL)
		r = "(null)";
	for (j = 0; r[j] != '\0'; j++)
	{
		char c = r[j];

		for (i = 0; input[i] != '\0'; i++)
		{
			if (c == input[i])
			{
				_putchar(output[i]);
				count++;
				break;
			}
		}
		if (input[i] == '\0')
		{
			_putchar(c);
			count++;
		}
	}
	return (count);
}
