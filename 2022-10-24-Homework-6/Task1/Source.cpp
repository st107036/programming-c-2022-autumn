#include <iostream>
int main(int argc[], char* argv[])
{
	int n = 0;	
	int array[1000]{};

	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> array[i];
	}
	for (int i = n - 1; i >= 0; i--)
	{
		std::cout << array[i] << " ";
	}

	return EXIT_SUCCESS;
}