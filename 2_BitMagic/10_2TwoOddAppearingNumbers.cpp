#include <iostream>
using namespace std;

void missing(int arr [],int n){
    int res1=0,res2=0,xo=0;
    for (int i = 0; i < n; i++)
    {
        xo=xo^arr[i];
    }
    int sn=xo&(~(xo-1));
    for (int i = 0; i < n; i++)
    {
        if(arr[i]&sn!=0){
            res1=res1^arr[i];
        }else{
            res2=res2^arr[i];
        }
    }
    cout<<res1<<"\n"<<res2<<endl;
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    missing(arr,n);
    
    return 0;
}