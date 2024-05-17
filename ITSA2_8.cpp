#include <iostream>

using namespace std;

int main()
{
    int times;
    cin >> times;
    int a[times];
    for (int i = 0; i < times; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < times; i++)
    {
        cout << a[i] << " " << a[i] * a[i] << " " << a[i] * a[i] * a[i] << endl;
    }
    return 0;
}