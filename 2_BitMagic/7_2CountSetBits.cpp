#include <iostream>
using namespace std;

void print(int n)
{
    int res = 0;
    while (n > 0)
    {
        n = (n & (n - 1));
        res++;
    }
    cout << res << endl;
}

int main()
{
    int n;
    cin >> n;
    print(n);

    return 0;
}