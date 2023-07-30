#include <iostream>
using namespace std;
int main(){
    int n=0;
    cin>>n;
    if(n<=1){
        cout<<"1 is not a prime number"<<endl;
    }
    for (int i = 2; i*i <= n; i++)
    {
        while(n%i==0){
            cout<<i<<endl;
            n=n/i;
        }
    }
    
    if(n>1){
        cout<<n<<endl;
    }
    // cout<<ans<<endl;
    return 0;
}