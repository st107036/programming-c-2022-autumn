#include <iostream>
#include <cstdlib> 
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
    setlocale(0, "");
    int v;
    int t;
    int s;
    cin >> v >> t;
    s = ((109 + v * t % 109) % 109);

    cout << s;
    return EXIT_SUCCESS;
}