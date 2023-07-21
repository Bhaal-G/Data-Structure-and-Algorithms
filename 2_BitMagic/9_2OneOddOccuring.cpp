#include <iostream>
using namespace std;

int oddoccuring(int arr[],int n){
    int res=0;
    for(int i=0;i<n;i++){
        res=res^arr[i];
    }
    for(int i=0;i<n;i++){
        if(res==arr[i]){
            cout<<i<<endl;
        }
    }
    
    return res;
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<oddoccuring(arr,n)<<endl;
    
    return 0;
}