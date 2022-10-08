#include<bits/stdc++.h>
#include<exception>
using namespace std;


int avg(int ar[],int n)
{
    try{
    int sum=0;
    for(int i=0;i<n;i++)
        sum+=ar[i];
    return sum/n;
    }
     catch(exception e)
    {
        cout<<e;
    }

}
int main()
{
    int x,y;
    cin>>x>>y;
    int arr[]={44,5,6667,4};
    cout<<avg(arr,0);
   
    return 0;
}