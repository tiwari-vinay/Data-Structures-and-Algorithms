#include<bits/stdc++.h>
using namespace std;

bool isLucky(int n)
{
    // int counter=2;
   
    // while(counter<=n)
    // {
    //     if(n%counter==0)
    //         return false;
    //     n=n-n/counter;
    //     counter++;
    // }
    // return true;
    int counter=2;
    if(n<counter)
        return true;
    if(n%counter==0)
        return false;
    int nxtP=n-n/counter; 
    counter++;
    return isLucky(nxtP);
}
int main()
{
    int n;cin>>n;
    cout<<isLucky(n);
    return 0;
}