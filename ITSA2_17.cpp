#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a, b;
    double c = 0;
    cin >> a >> b;
    if (a <= 60)
        c = a * b;
    else if (a > 60 && a < 121)
        c = (60 * b) + (a - 60) * b * 1.33;
    else if (a >= 121)
        c = (60 * b * 2.33) + (a - 120) * b * 1.66;
    cout << fixed << setprecision(1) << c << endl;

    return 0;
}