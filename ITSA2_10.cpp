#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int a;
    cin >> a;
    double b = a * 1.6;
    cout << fixed << setprecision(1) << "km=" << b << endl;

    return 0;
}