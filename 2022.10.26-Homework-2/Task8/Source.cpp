#include<iostream>
int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;

	std::cin >> a >> b >> c;
	if (a < (b + c) and b < (a + c) and c < (a + b))
	{
		if (((a ^ 2) == (b ^ 2) + (c ^ 2)) or ((b ^ 2) == (a ^ 2) + (c ^ 2)) or ((c ^ 2) == (b ^ 2) + (a ^ 2)))
		{
			std::cout << "right" << std::endl;
		}
		else if (((a ^ 2) > (b ^ 2) + (c ^ 2)) or ((b ^ 2) > (a ^ 2) + (c ^ 2)) or ((c ^ 2) > (b ^ 2) + (a ^ 2)))
		{
			std::cout << "obtuse" << std::endl;
		}
		else
		{
			std::cout << "acute" << std::endl;
		}
	}
	else
	{
		std::cout << "impossible" << std::endl;
	}
	return EXIT_SUCCESS;
}