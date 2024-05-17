#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b;
    cin >> a;
    if (a >= 100)
    {
        b = a * 100 * 0.7;
    }
    else if (a >= 30 && a <= 99)
    {
        b = a * 100 * 0.8;
    }
    else if (a >= 10)
    {
        b = a * 100 * 0.9;
    }
    cout << b << endl;
    return 0;
}
