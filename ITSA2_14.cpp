#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b;
    cin >> a;
    a *= 100;
    b = a / (100 - 30 * 2.54);
    cout << ceil(b) << endl;

    return 0;
}