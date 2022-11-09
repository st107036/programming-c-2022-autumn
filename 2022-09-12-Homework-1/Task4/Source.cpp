#include<iostream>
int main(int argc, char* argv[])
{
	int speed = 0;
	int time = 0;
	std::cin >> speed >> time;

	std::cout << (109 + speed * time % 109) % 109 << std::endl;
	
	return EXIT_SUCCESS;
}