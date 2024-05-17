#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    for(int i = 0; i < a/10000; i++)
    {
        cout << "*";
    }
    cout << endl;
    for(int i = 0; i < a%10000/1000; i++)
    {
        cout << "*";
    }
    cout << endl;
    for(int i = 0; i < a%1000/100; i++)
    {
        cout << "*";
    }
    cout << endl;
    for(int i = 0; i < a%100/10; i++)
    {
        cout << "*";
    }
    cout << endl;
    for(int i = 0; i < a%10/1; i++)
    {
        cout << "*";
    }
    cout << endl;
    return 0;
}
