#include<iostream>
int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;

	std::cout << "Enter two numbers:" << std::endl;

	std::cin >> a >> b;
	while (a <= b)
	{
		std::cout << a << " ";
		a = a + 1;
	}
	return EXIT_SUCCESS;
}