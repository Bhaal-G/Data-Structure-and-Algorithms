#include <iostream>
using namespace std;

int brianKerningams(int m){
    int res=0;
    while(m>0){
        m=m&(m-1);
        res++;
    }
    return res;
}

bool poweroftwo(int n){
    if(brianKerningams(n)==1){
        return true;
    }else{
        return false;
    }
}

int main(){
    int n;
    cin>>n;
    if(poweroftwo(n)){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}