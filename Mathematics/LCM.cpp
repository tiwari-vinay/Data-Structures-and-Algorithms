#include<iostream>
using namespace std;

int GCD(int a,int b)
{
    if(b==0)
    return a;
    else return GCD(b,a%b);
}
int LCM(int a,int b)
{
    return (a*b)/GCD(a,b);
}
int main()
{
#ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
#endif
    int a,b;
    cin>>a>>b;
    int gcd=GCD(a,b);
    cout<<LCM(a,b);
    return 0;
}