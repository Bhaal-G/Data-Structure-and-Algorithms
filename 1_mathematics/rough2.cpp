#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
    bool isPrime(int n)
    {
        if (n == 2 || n == 3)
        {
            return true;
        }
        if (n % 2 == 0 || n % 3 == 0)
        {
            return false;
        }
        for (int i = 5; i * i <= n; i = i + 6)
        {
            if ((n % i == 0) || (n % (i + 2) == 0))
            {
                return false;
            }
        }
        return true;
    }
    int exactly3Divisors(int N)
    {
        int res = 0;
        for (int i = 2; i * i <= N; i++)
        {
            if (isPrime(i))
            {
                if (i * i <= N)
                {
                    res++;
                    cout<<res<<endl;
                    cout<<"No-"<<i*i<<endl;
                }
            }
        }
        return res;
    }


int main()
{
    int n;
    cin>>n;
    cout<<exactly3Divisors(n)<<endl;

}

