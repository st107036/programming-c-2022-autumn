#include <iostream>
int main(int argc, char* argv[])
{
    int number = 0;
    int next = 0;

    std::cin >> number;
    next = number + 2 - (number % 2) * (number % 2);

    std::cout << next << std::endl;
    
    return EXIT_SUCCESS;
}