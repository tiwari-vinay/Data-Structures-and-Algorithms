#include<iostream>
using namespace std;
void Divisors(int n)
{
  // alternatively(less efficient solution)
    // for(int i=1;i<=n;i++)
    // {
    //     if(n%i==0) cout<<i<<" ";
    // }

    // alternatively
    for(int i=1;i*i<n;i++)
    {
        if(n%i==0) cout<<i<<" ";
        if(i!=n/i) cout<<n/i<<" ";
    }
   

}

int main()
{
#ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
#endif
    int n; cin>>n;
    Divisors(n);
    return 0;
}