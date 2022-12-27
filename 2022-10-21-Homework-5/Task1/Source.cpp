#include<iostream>
int main(int argc, char* argv[])
{
	int size = 0;
	int x = 0;
	int count = 0;

	std::cin >> size;

	int array[1000]{0};

	for (int i = 0; i < size; i++)
	{
		std::cin >> array[i];
	}
	std::cin >> x;

	for (int i = 0; i < size; i++)
	{
		if (array[i] == x)
		{
			count++;
		}
	}

	std::cout << count;

	return EXIT_SUCCESS;
}