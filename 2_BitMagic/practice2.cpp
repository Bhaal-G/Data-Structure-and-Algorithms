#include <iostream>
using namespace std;

void elements(int arr[], int n) 
{
    int siz = 3;
    int xo = 0;
    for (int i = 0; i < siz; i++)
    {
        xo = xo ^ arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        xo = xo ^ i;
    }
    cout << xo << endl;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    elements(arr, n);

    return 0;
}
