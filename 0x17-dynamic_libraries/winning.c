int rand()
{
	static j = 0;
	int arr[6] = {8, 8, 7, 9, 23, 74};
	int i;

	i = arr[j];
	j++;
	return(i);
}
