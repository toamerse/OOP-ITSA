#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    switch (a)
    {
    case 1:
        for (int i = 1; i <= 9; i++)
        {
            if (i % 2)
            {
                if (i == 1)
                    cout << "    ";
                if (i == 3)
                    cout << "   ";
                if (i == 5)
                    cout << "  ";
                if (i == 7)
                    cout << " ";
                for (int j = 0; j < i; j++)
                {
                    if((j == 0 || j == i-1) && i != 9)
                        cout << "*";
                    else if (i == 9)
                    {
                        cout << "*";
                    }
                    else 
                        cout << " ";
                }
                cout << endl;
            }
        }
        break;
    case 2:
        for (int i = 1; i <= 9; i++)
        {
            if (i % 2)
            {
                if (i == 1)
                    cout << "    ";
                if (i == 3)
                    cout << "   ";
                if (i == 5)
                    cout << "  ";
                if (i == 7)
                    cout << " ";
                for (int j = 0; j < i; j++)
                {
                    cout << "*";
                }
                cout << endl;
            }
        }
        break;
    case 3:
        for (int i = 9; i >= 1; i--)
        {
            if (i % 2)
            {
                if (i == 1)
                    cout << "    ";
                if (i == 3)
                    cout << "   ";
                if (i == 5)
                    cout << "  ";
                if (i == 7)
                    cout << " ";
                for (int j = 0; j < i; j++)
                {
                    cout << "*";
                }
                cout << endl;
            }
        }
        break;
    }
    return 0;
}
