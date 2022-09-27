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
    int d;
    int e;
    int f;
    cin >> a >> b >> c >> d >> e >> f;
    cout << (d * 3600 + e * 60 + f) - (a * 3600 + b * 60 + c) << endl;
    system("pause"); 

    return EXIT_SUCCESS;
}