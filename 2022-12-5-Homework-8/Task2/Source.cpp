#include <iostream>
int phi(int n)
{
	switch (n)
	{
	case 0:
		return 1;
	case 1:
		return 1;
	default:
		return phi(n - 1) + phi(n - 2);
	}
}
int main(int argc[], char* argv[])
{
	int n = 0;

	std::cin >> n;

	std::cout << phi(n) << std::endl;

	return EXIT_SUCCESS;
}