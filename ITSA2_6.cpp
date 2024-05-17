#include <iostream>

using namespace std;

int main()
{
    int times;
    cin >> times;
    int a[times][2];
    for(int i = 0; i < times; i++)
    {
        cin >> a[i][0] >> a[i][1];
    }
    for(int i = 0; i < times; i++)
    {
        cout << (a[i][0] + a[i][1])*(a[i][0] + a[i][1]) << endl;
    }

    return 0;
}