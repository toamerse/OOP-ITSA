#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    cout << a/1000 << endl << a%1000/100 << endl << a%100/10 << endl << a%10/1 << endl;
    return 0;
}
