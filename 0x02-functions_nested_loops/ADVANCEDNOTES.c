/* 13 */
int main(void)
{
	for (; n < 1024; n++)
		if (!(n % 5) || !(n % 3))
			sum += n;
	print(sum);
}


