#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int c = a % b;
    cout << a << "+" << b << "=" << a + b << endl;
    cout << a << "*" << b << "=" << a * b << endl;
    cout << a << "-" << b << "=" << a - b << endl;
    if (c < 0)
        cout << a << "/" << b << "=" << (a / b) - 1 << "..." << c + b << endl;
    else
        cout << a << "/" << b << "=" << (a / b) << "..." << c << endl;

    return 0;
}