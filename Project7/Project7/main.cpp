#include <iostream>
#include <cstdlib> 
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
    int a;
    int b;
    int c;
    c = 0;
    cin >> a >> b;
    c = a;
    a = b;
    b = c;

    cout << "a = " << a << " b = " << c << endl;
    system("pause"); 
    return EXIT_SUCCESS;
}