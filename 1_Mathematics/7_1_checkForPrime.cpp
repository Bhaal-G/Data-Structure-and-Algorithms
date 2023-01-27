#include <iostream>
#include <cmath>
using namespace std;
bool prime(int a){ 
   if(a==1){
       return false;
   }
   for (int i = 2; i*i<=a; i++)
   {
       if(a%i==0){
           return false;
       }
   } 
       return true;
}
int main(){
    int a=0;
    cin>>a;
    cout<<boolalpha<<endl;
    cout<<prime(a)<<endl;
    return 0;
}