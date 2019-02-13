

if (n > 99 && n < 1000)
{
	_putchar('0' + (n / 100));
	_putchar('0' + ((n / 100) % 10));
	_putchar('0' + (n % 10));
}
