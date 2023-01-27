#include <iostream>
using namespace std;

int main(){
    int n{};
    cin>>n;
    int temp=n;
    int rev=0;
    while(temp>0){
        int ld=temp%10;
        rev=rev*10+ld;
        temp=temp/10;
    }
    cout<<rev<<endl;
    return 0;
}