#include <iostream>
#include<vector>
#include<cmath>
using namespace std;

bool isPrime(int n){
    if(n==1){
        return false;
    }
    if(n==2||n==3){
        return true;
    }
    if(n%2==0||n%3==0){
        return false;
    }
    for (int i = 5; i*i<=n; i=i+6)
    {
        if(i%n==0){
            return false;
        }
    }
    return  true;
}

int main(){
    int n;
    cin>>n;
    int res=0;
    for(int i=0;i*i<=n;i++){
        if(isPrime(i)){
            res++;
        }
    }
    cout<<res;

    return 0;
}