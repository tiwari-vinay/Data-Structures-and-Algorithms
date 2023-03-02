#include<bits/stdc++.h>
using namespace std;

int sol(int f,int e)
{
    if(f==0  or  f==1)    return f;
    if(e==1)    return f;

    // int res=INT_MAX;
    int min = INT_MAX;
    int x,res;
    for(int x=1;x<=f;x++)
    {
        res=max(sol(f-1,e-1),sol(f-x,e));
        if(res<min)
            min=res;
    }
    return res+1;
}

int main()
{
    int egg=2;
    int floor = 10;
    cout<<sol(floor,egg);
    return 0;
}