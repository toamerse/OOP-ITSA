#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a;
    double b;
    cin >> a;
    if (a <= 800)
        b = a * 0.9;
    else if (a > 800 && a < 1500)
        b = a * 0.9 * 0.9;
    else
        b = a * 0.9 * 0.79;
    cout << fixed << setprecision(1) << b <<endl;

    return 0;
}