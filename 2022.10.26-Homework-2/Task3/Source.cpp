#include<iostream>
int main(int argc, char* argv[])
{
	int k = 0;
	int m = 0;
	int n = 0;

	std::cin >> k >> m >> n;

	if (k <= 0 or m < 0 or n < 0)
	{
		return EXIT_FAILURE;
	}
	else if ((n * 2) % k != 0)
	{
		std::cout << (n / k + 1) * 2 * m << std::endl;
	}
	else
	{
		std::cout << n / k * 2 * m << std::endl;
	}
	return EXIT_SUCCESS;
}