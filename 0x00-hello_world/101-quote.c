#include <unistd.h>

/**
 * main - entry point
 * Description: another print use but with write function
 * Return: 1 (fail)
 */

int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, msg, 59);
	return (1);
}
