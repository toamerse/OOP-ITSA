#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int times;
    cin >> times;
    int a[times][2];
    for (int i = 0; i < times; i++)
    {
        cin >> a[i][0] >> a[i][1];
    }
    for (int i = 0; i < times; i++)
    {
        cout << (((a[i][0] + a[i][1]) * (abs(a[i][0] - a[i][1]) + 1)) / 2) << endl;
    }

    return 0;
}
