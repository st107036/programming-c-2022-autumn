#include <iostream>
int main(int argc[], char* argv[])
{
	int bin_num = 0;
	int dec_num = 0;
	int digit = 0;
	int deg = 2;
	std::cin >> bin_num;
	
	dec_num += bin_num % 10;
	bin_num /= 10;

	while (bin_num != 0)
	{
		for (int i = 0; i < digit; i++)
		{
			deg *= 2;
		}
		dec_num += bin_num % 10 * deg;
		digit += 1;
		bin_num /= 10;
		deg = 2;
	}

	std::cout << dec_num << std::endl;

	return EXIT_SUCCESS;
}