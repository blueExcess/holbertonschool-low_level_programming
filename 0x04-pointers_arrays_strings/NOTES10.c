int _atoi(char *s)
{
	int ret = 0;
	signed char sign = 1;
	char *sub;
	
	for (sub = s; (*sub < '0' || *sub > '9') && *sub; sub++)
	{
		if (*sub == '-')
			sign = -sign;
	}
	for (; *sub >= '0' && * sub <= '9'; sub++)
	{
		ret *= 10;
		if (sign == 1)
			ret -= *sub - '0';
		else
			ret += *sub - '0';
	}
	return (ret);
}
