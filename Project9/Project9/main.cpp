#include <iostream>
#include <cstdlib> 
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
    int a;
    int b;
    b = 0;
    cin >> a;
    b = a * a;
    cout << b * (b + a) + b + a + 1 << endl;
    system("pause"); 
    return EXIT_SUCCESS;
}
