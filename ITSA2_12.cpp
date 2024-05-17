#include <iostream>

using namespace std;

int main()
{
    int a, a_10, a_5, a_1;
    cin >> a;
    a_10 = a / 10;
    a_5 = (a % 10) / 5;
    a_1 = a % 5;
    cout << "NT10=" << a_10 << endl;
    cout << "NT5=" << a_5 << endl;
    cout << "NT1=" << a_1 << endl;

    return 0;
}