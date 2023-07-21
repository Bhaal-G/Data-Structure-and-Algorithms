#include <iostream>
using namespace std;


void elements(int arr[], int n)
{
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {

        if (arr[i] > max)
        {
            max = arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"Max:"<<max<<endl;
    cout<<"Min:"<<min<<endl;
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