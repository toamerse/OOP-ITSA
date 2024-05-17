#include <iostream>

using namespace std;

int main()
{
    int n;
    bool boo;
    cin >> n;
    for (int i = n - 1; i > 1; i--)
    {
        boo = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                boo = false;
                break;
            }
        }
        if (boo)
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}