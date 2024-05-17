#include <iostream>

using namespace std;

int main()
{
    int n;
    bool boo = true;
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            boo = false;
            break;
        }
    }
    if (boo)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
