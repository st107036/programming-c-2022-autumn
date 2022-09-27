#include <iostream>
#include <cstdlib> 
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
    setlocale(0, "");
    int a;
    cin >> a;
    cout << "The next number for the number " << a << " is " << a+1 << "." << endl;
    cout << "The previous number for the number " << a << " is " << a - 1 << "." << endl;
    return EXIT_SUCCESS;
}