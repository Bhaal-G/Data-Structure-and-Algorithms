#include <iostream>
using namespace std;
int gcd(int a, int b) { 
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}
int lcm(int c, int d){
    return c*d/gcd(c,d);
}
int main(){
    int a=0,b=0;
    cin>>a>>b;
    int ans=lcm(a,b);
    cout<<ans<<endl;
    return 0;
}