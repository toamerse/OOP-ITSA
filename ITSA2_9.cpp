#include <iostream>
#include <cmath>

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
        if(a[i] > 31)
            cout << "Value of more than 31" << endl;
        else 
        {
            int b = pow(2, a[i]);
            cout << b << endl;
        }
    }
    return 0;
}