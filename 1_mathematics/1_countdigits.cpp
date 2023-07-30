#include <iostream>
using namespace std;

int main(){
    int n{};
    cin>>n;
    int count{};
    while(n>0){
        n=n/10;
        count++;
    }
    cout<<count<<endl;
    return 0;
}