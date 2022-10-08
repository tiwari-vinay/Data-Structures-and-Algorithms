#include<iostream>
#include<cmath>

using namespace std;

int trailingZero(int n)
{
    int zero=0;
    int i=1;
    while(n>0)
    {
        zero+=n/(pow(5,i));
        n=n/5; i++;
    }
     return zero;
}
int main()
{
    int n;
    cin>>n;
    cout<<trailingZero(n);
    return 0;
}