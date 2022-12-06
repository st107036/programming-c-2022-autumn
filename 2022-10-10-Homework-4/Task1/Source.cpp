#include <iostream>
int main(int argc[], char* argv[])
{
	int x = 0;
	int count = 0;
	
	std::cin >> x;

	for (int i = 1; i <= x; i++)
	{
		if (x % i == 0)
		{
			count++;
		}
	}
	std::cout << count << std::endl;

	return EXIT_SUCCESS;
}