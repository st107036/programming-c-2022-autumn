#include <iostream>
int main(int argc, char* argv[])
{
    int hour1 = 0;
    int min1 = 0;
    int sec1 = 0;
    int hour2 = 0;
    int min2 = 0;
    int sec2 = 0;

    std::cin >> hour1 >> min1 >> sec1 >> hour2 >> min2 >> sec2;
    std::cout << (hour2 * 3600 + min2 * 60 + sec2) - (hour1 * 3600 + min1 * 60 + sec1) << std::endl;

    return EXIT_SUCCESS;
}