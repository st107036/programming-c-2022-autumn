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
    int c;
    c = 0;
    cin >> a >> b;
    c = (b * a) % 109;
    if (c < 0) {
        cout << 109 + c << endl;
    }
    else {
        cout << c << endl;
    }

    return EXIT_SUCCESS;
}