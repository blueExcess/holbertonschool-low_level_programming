/* alternate method for 10, and for advanced */

int i;

for (i = 0; i < 100; i++)
{
	putchar(i / 10 + '0');
	putchar(i % 10 + '0');
	if (i < 99)
	{
		putchar(',');
		putchar(' ');
	}
}
putchar(10);
return (0);


/* 11 */
x y
0 1
if y > x, don't print
second loop initialization = first loop number?

first for loop
for (x = 48; x <= 57; x++)
	for(y = x + 1; y <= 57; y++)
		putchar(x);
		putchar(y);
		if ((x < 56) || (y < 57))
			putchar(',');
			putchar(' ');

12:
/* note -- 58 = '9' + 1 */
/* to follow pattern of previous challenge, extend to 3 digits */
int x, y, z;

for (x = '0'; x < 58; x++)
{
	for (y = z + 1; y < 58; y++)
	{
		for (z = y + 1; z < 58; z++)
		{
			putchar(x);
			putchar(y);
			putchar(z);
			if ((x < '7') || (y < '8') || (z < '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
}
putchar(10);
return (0);

13:
int first, second;
for(first = 0; first < 99; first++)
{
	for(second = first + 1; second < 100; second++)
	{
		putchar(first / 10 + '0');
		putchar(first % 10 + '0');
		putchar(' ');
		putchar(second / 10 + '0');
		putchar(second % 10 + '0');
		if (first < 98 || second < 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
}
putchar(10);

return (0);


