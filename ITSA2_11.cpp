#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a, b;
    cin >> a;
    b = a * (9.0 / 5.0) + 32;
    cout << fixed << setprecision(1) << b << endl;

    return 0;
}