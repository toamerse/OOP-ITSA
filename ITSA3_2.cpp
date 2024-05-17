#include <iostream>

using namespace std;

int main()
{
    char a;
    cin >> a;
    if (tolower(a) == 'a' || tolower(a) == 'e' || tolower(a) == 'i' || tolower(a) == 'o' || tolower(a) == 'u')
        cout << "母音" << endl;
    else
        cout << "子音" << endl;
}
