#include<iostream>
using namespace std;

void print(int n,int k){
   if(((n>>(k-1))&1)==1){
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