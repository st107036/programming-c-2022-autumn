#include <iostream>
int min(int arr[4], int n)
{
	if (n == 1)
	{
		return arr[0];
	}
	else
	{
		if (min(arr, n - 1) < arr[n - 1])
		{
			return min(arr, n - 1);
		}
		else
		{
			return arr[n - 1];
		}
	}
}
int main(int argc[], char* argv[])
{
	int array[4]{};

	for (int i = 0; i < 4; i++)
	{
		std::cin >> array[i];
	}

	std::cout << min(array, 4);

	return EXIT_SUCCESS;
}