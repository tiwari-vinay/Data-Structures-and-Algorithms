#include<iostream>
using namespace std;

int GCD(int a,int b)
{
   if(b==0) return a;
    return GCD(b,a%b);
}
int main()
{
#ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
#endif
    int n,m;
    n=m=0;
    cin>>n>>m;
    cout<<"the GCD is:"<<GCD(n,m);
}