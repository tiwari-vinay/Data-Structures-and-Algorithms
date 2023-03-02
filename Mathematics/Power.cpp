#include<iostream>
using namespace std;
int Power(int n,int x)
{
  
    if(n==0) return 1;
    int res=Power(n/2,x);
    if(n%2!=0) return x*res;
    if(n%2==0) return res*res;
    
}
int main()
{
#ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
#endif
    int n,x;
    cin>>n>>x;
    cout<<Power(n,x);
    return 0;
}