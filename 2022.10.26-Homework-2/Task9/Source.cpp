#include<iostream>
int main(int argc, char* argv[])
{
	int length = 0;
	int height = 0;
	int x = 0;
	int y = 0;
	std::cin >> length >> height >> x >> y;
	if (x != 1 and x != length)
	{
		if (y != 1 and y != height)
		{
			std::cout << "(" << x - 1 << ";" << y << ")" << " " << "(" << x << ";" << y - 1 << ")" << " " << "(" << x << ";" << y + 1 << ")" << " " << "(" << x + 1 << ";" << y << ")" << std::endl;
		}
		else if (y == 1 and y != height)
		{
			std::cout << "(" << x - 1 << ";" << y << ")" << " " << "(" << x << ";" << y + 1 << ")" << " " << "(" << x + 1 << "; " << y << ")" << std::endl;
		}
		else if (y != 1 and y == height)
		{
			std::cout << "(" << x - 1 << ";" << y << ")" << " " << "(" << x << ";" << y - 1 << ")" << " " << "(" << x + 1 << ";" << y << ")" << std::endl;
		}
		else
		{
			std::cout << "(" << x - 1 << ";" << y << ")" << " " << "(" << x + 1 << ";" << y << ")" << std::endl;
		}
	}
	else if (x == 1 and x != length)
	{
		if (y != 1 and y != height)
		{
			std::cout << "(" << x << ";" << y - 1 << ")" << " " << "(" << x << ";" << y + 1 << ")" << " " << "(" << x + 1 << ";" << y << ")" << std::endl;
		}
		else if (y == 1 and y != height)
		{
			std::cout << "(" << x << ";" << y + 1 << ")" << " " << "(" << x + 1 << ";" << y << ")" << std::endl;
		}
		else if (y != 1 and y == height)
		{
			std::cout << "(" << x << ";" << y - 1 << ")" << " " << "(" << x + 1 << ";" << y << ")" << std::endl;
		}
		else
		{
			std::cout << "(" << x + 1 << ";" << y << ")" << std::endl;
		}
	}
	else if (x != 1 and x == length)
	{
		if (y != 1 and y != height)
		{
			std::cout << "(" << x - 1 << ";" << y << ")" << " " << "(" << x << ";" << y - 1 << ")" << " " << "(" << x << ";" << y + 1 << ")" << std::endl;
		}
		else if (y == 1 and y != height)
		{
			std::cout << "(" << x - 1 << ";" << y << ")" << " " << "(" << x << ";" << y + 1 << ")" << std::endl;
		}
		else if (y != 1 and y == height)
		{
			std::cout << "(" << x - 1 << ";" << y << ")" << " " << "(" << x << ";" << y - 1 << ")"  << std::endl;
		}
		else
		{
			std::cout << "(" << x - 1 << ";" << y << ")" << std::endl;
		}
	}
	else
	{
		if (y != 1 and y != height)
		{
			std::cout << "(" << x << ";" << y - 1 << ")" << " " << "(" << x << ";" << y + 1 << ")" << std::endl;
		}
		else if (y == 1 and y != height)
		{
			std::cout << "(" << x << ";" << y + 1 << ")" << std::endl;
		}
		else
		{
			std::cout << "(" << x << ";" << y - 1 << ")" << std::endl;
		}
	}
	return EXIT_SUCCESS;
}