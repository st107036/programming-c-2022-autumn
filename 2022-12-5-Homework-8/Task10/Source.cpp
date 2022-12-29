#include <iostream>
int count(int n, int** array, int num)
{
	int res = 1;
	for (int i = 0; i < n; i++)
	{
		if (array[i][1] == num)
		{
				res += count(n, array, i + 1);
		}
	}
	return res;
}
int main(int argc[], char* argv[])
{
	int n = 0;
	int k = 0;
	int m = 2;

	std::cin >> n;

	int** array;
	array = new int* [n];
	for (int i = 0; i < n; i++)
	{
		array[i] = new int[m];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			std::cin >> array[i][j];
		}
	}

	std::cin >> k;

	std::cout << count(n, array, k) << std::endl;

	return EXIT_SUCCESS;
}