#include <stdio.h>
/**
 * main -Entery main
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x=0; x<10; x++)
	{
		putchar(48 + x);
	}
	putchar('\n');
	return 0;
}
