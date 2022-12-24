#include <iostream>
#include <string>
int main(int argc[], char* argv[])
{
	char bin_num[11] = "";
	int dec_num = 0;
	int digit = 0;
	std::cin >> bin_num;
	for (int i = 9; i >= 0; i++)
	{
		digit = (int)bin_num[i] - '0';
		dec_num += pow(2, 9 - i) * digit;
	}

	std::cout << dec_num << std::endl;

	return EXIT_SUCCESS;
}