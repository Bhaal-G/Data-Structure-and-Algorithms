#include<iostream>
using namespace std;

void print(int n,int k){
    if(n&(1<<(k-1))!=0){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}

int main(){
    int n,k;
    cin>>n>>k;
    print(n,k);


    return 0;
}