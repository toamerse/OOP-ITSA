#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    int a;
    cin >> a;

    stringstream ss;
    ss << hex << uppercase << a;

    string hexNumber = ss.str();
    cout << hexNumber << endl;

    return 0;
}
