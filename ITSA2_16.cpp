#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, t, s = 0;

    cin >> a >> c >> b >> d;
    t = 60 * (b - a) + (d - c);
    if (t <= 120 and t >= 30)
        s = (t / 30) * 30;
    else if (t > 120 and t <= 240)
        s = ((t - 120) / 30) * 40 + 120;
    else if (t > 240)
        s = ((t - 240) / 30) * 60 + 280;
    cout << s << endl;

    return 0;
}