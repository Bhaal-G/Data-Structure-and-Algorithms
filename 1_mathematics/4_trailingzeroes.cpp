#include <iostream>
using namespace std;

int main(){
    int n{};
    cin>>n;
    int count{};
    cout<<"---------------"<<endl;
    for(int i=1;i<=n;i=i*5){
        cout<<i<<endl;
        count+=n/i;
    }
    cout<<count<<endl;

    return 0;
}