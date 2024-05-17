#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a, b;
    cin >> a >> b;
    cout << fixed << setprecision(2) << a / ((b / 100.0) * (b / 100.0)) << endl;

    return 0;
}