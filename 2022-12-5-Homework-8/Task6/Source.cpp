#include <iostream>
int max(char array[], int len)
{
	if (len == 1)
	{
		return array[0] - '0';
	}
	else
	{
		if (array[len - 1] - '0' > max(array, len - 1))
		{
			return array[len - 1] - '0';
		}
		else
		{
			return max(array, len - 1);
		}
	}
}
int main(int argc[], char* argv[])
{
	int n = 0;
	char array[1000]{};
	array[0] = getchar();
	while (array[n] != '\n')
	{
		n++;
		array[n] = getchar();
	}

	std::cout << max(array, n) << std::endl;

	return EXIT_SUCCESS;
}