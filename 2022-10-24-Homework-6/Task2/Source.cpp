#include <iostream>
int main(int argc[], char* argv[])
{
	int n = 0;
	int array[1000]{};
	int m = 0;
	int subarray[100][2]{};

	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> array[i];
	}

	std::cin >> m;

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			std::cin >> subarray[i][j];
		}
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = subarray[i][0]; j <= subarray[i][1]; j++)
		{
			std::cout << array[j - 1] << " ";
		}
		std::cout << std::endl;
	}

	return EXIT_SUCCESS;
}