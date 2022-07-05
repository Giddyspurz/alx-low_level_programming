/**
 *main - entry
 *
 *Description prints _putchar followed by a new line
 *
 *Return: 0 (success)
 */
int main(void)
{
	char c[9] = "Holberton";
	int i;

	for (i = 0; i < 9; ++i)
		_putchar(c[i]);
	_putchar('\n');
	return (0);
}
