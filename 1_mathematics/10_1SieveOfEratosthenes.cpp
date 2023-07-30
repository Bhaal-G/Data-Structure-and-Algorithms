#include <iostream>
using namespace std;

bool prime(int i){
    if(i==1){
        return false;
    }
    if(i==2||i==3){
        return true;
    }
    if(i%2==0||i%3==0){
        return false;
    }
    for (int j = 5; j*j <= i; j=j+6)
    {
        if((i%j==0) || (i%j+2==0)){
            return false;
        }
    }
    return true;
}


int main(){
    int n;
    cin>>n;
    if(n==1){
        cout<<"Not a prime"<<endl;
    }
    for (int i = 2; i <= n; i++)
    {
        if(prime(i)){
            cout<<i<<endl;
        }

    }
    



    return 0;
}