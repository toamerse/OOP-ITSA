#include <iostream>

using namespace std;

int main()
{
    int n, s = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 6 == 0 && i % 12 != 0)
            s += i;
    }
    cout << s << endl;

    return 0;
}