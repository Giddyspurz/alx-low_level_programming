#include "main.h"
#include <stdio.h>
/**
 * print_buffer - prints a buffer
 * @b: buffer.
 * @size: size of buffer.
 * Return: void.
 */
void print_buffer(char *b, int size)
{
	int f, g, h;

	if (size <= 0)
		printf("\n");
	else
	{
		for (f = 0; f < size; f += 10)
		{
			printf("%.8x:", f);
				for (g = f; g < f + 10; g++)
				{
					if (g % 2 == 0)
						printf(" ");
					if (g < size)
						printf("%.2x", *(b + g));
					else
						printf("  ");
				}
			printf(" ");
			for (h = f; h < f + 10; h++)
			{
				if (h >= size)
					break;
				if (*(b + h) < 32 || *(b + h) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + h));
			}
			printf("\n");
		}
	}
}
