#include <bits/stdc++.h>
using namespace std;
void lin(int a[7],int n)
{
    for(int i=0;i<7;i++)
    {
        if(a[i]==n)
       {
        cout<<a[i]<<" found at: "<<i+1;
        }  
    }
}
int main()
{
int a[7]={0,5,6,12,3,9,1};
int n;
cin>>n;
lin(a,n);

}