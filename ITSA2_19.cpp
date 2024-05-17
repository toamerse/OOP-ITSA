#include <iostream>

using namespace std;

int gcd(int m, int n)
{
    if (m % n == 0)
        return n;
    else
        return gcd(n, m % n);
}
int main()
{
    int m, n, a;
    cin >> m >> n;
    a = gcd(m, n);
    cout << a << endl;

    return 0;
}