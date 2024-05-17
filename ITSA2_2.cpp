#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a, b, c;
    double d;
    cin >> a >> b >> c;
    d = ((a + b) * c) / 2.0;
    cout << fixed << setprecision(1) << "Trapezoid area:" << d << endl;

    return 0;
}