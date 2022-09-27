#include <iostream>
#include <cstdlib> 
using std::cin;
using std::cout;
using std::endl;


int main(int argc, char* argv[])
{
    setlocale(0, "");
    int a;
    int b;
    cin >> a >> b;
    cout << b / a << endl;
    return EXIT_SUCCESS;
}