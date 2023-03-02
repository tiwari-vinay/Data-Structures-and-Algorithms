#include<iostream>
using namespace std;

// Most efficient solution for the prime numbers 
bool Prime(int n)
{
    if(n==1) return false;
    if(n==2 || n==3) return true;
    if(n%2==0 || n%3==0) return false;
    for(int i=5;i*i<n;i=i+6)
    {
        if(n%i==0) return false;
        if(n%(i+2)==0) return false;
    }
    return true;

}
int main()
{
#ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
#endif
    int n; cin>>n;
    cout<<Prime(n);
    return 0;
}