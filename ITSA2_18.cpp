#include <iostream>

using namespace std;

int main()
{
    int a, day, hour, minute, second;
    cin >> a;
    day = a / 86400;
    hour = (a % 86400) / 3600;
    minute = (a % 3600) / 60;
    second = a % 60;
    cout << day << " days" << endl;
    cout << hour << " hours" << endl;
    cout << minute << " minutes" << endl;
    cout << second << " seconds" << endl;

    return 0;
}