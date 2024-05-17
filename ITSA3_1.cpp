#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    if (a > 0)
        cout << "正數" << endl;
    else if (a == 0)
        cout << "0" << endl;
    else
        cout << "負數" << endl;
}
