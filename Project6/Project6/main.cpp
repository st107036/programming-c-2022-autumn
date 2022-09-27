#include <iostream>
#include <cstdlib> 
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
    int a;
    cin >> a;
    cout << a+2 - (a % 2) * (a % 2) << endl;
    system("pause"); 
    return EXIT_SUCCESS;
}