#include <iostream>
int main(int argc[], char* argv[])
{
	int n = 0;
	int denom = 1;
	float sum = 1;

	std::cin >> n;

	for (int i = 1; i < n + 1; i++)
	{
		denom *= i;
		sum += 1. / denom;
		std::cout << sum << " " << denom << std::endl;
	}

	std::cout << sum;

	return EXIT_SUCCESS;
}