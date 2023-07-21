#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void PowerSet(string str)
{
    int n = str.length();
    int powerSize = pow(2, n);
    for (int counter = 0; counter < powerSize; counter++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((counter & (1 << j)) != 0)
            {
                cout << str[j];
            }
        }
        cout << "\n";
    }
}

int main()
{
    string str;
    cin >> str;
    PowerSet(str);

    return 0;
}