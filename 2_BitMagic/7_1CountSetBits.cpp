#include <iostream>
using namespace std;

void print(int n)
{
    int res = 0;
    while (n > 0)
    {
        if (n % 2 != 0)
        {
            res++;
        }
        n=n/2;
    }
    cout<<res<<endl;
}

int main()
{
    int n;
    cin >> n;
    print(n);

    return 0;
}