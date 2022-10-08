#include<iostream>
using namespace std;
int Joseph(int n,int k)
{
    if(n==1) return 0;

    return (Joseph(n-1,k)+k)%n;
    
}
int main()
{
    int n;
    int k;
    cin>>n>>k;
    cout<<Joseph(n,k);
    return 0;
    int p;
    cin>>p;
}
