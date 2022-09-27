#include <iostream>
#include <cstdlib> 
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
    int a;
    cin >> a;
    cout << a / 100 + (a % 100) / 10 + a % 10 << endl;
    system("pause"); 
    return EXIT_SUCCESS;
}