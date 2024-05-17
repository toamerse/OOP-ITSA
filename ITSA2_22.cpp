#include <iostream>
#include <bitset>

using namespace std;
int main()
{
    int a;
    cin >> a;

    bitset<8> binary(a);
    cout << binary.to_string() << endl;

    return 0;
}
