#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int bin=0;int i=0;
    while(n>0)
    {
        bin+=n%2*pow(10,i);
        n/=2;i++;
    }
    cout<<bin;
    return 0;
}