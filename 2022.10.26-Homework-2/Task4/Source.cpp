#include<iostream>
int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	std::cin >> a >> b >> c >> d;
	if (a == 0 and b == 0)
	{
		std::cout << "INF";
	}
	else
	{
		if (a == 0 or b % a != 0 or c * (-b / a) + d == 0)
		{
			std::cout << "NO";
		}
		else
		{
			std::cout << -b / a << std::endl;
		}
	}
	return EXIT_SUCCESS;
}