#include<bits/stdc++.h>
using namespace std;

int countBST(int n)
{
    vector<int> table(n+1);
    table[0]=1;

    for(int i=1;i<=n;i++)
    {
        table[i]=0;
        for(int j=0;j<i;j++)
        {
            table[i]+=table[j]*table[i-j-1];
        }
    }
    return table[n];
}

int main()
{
    int n=4;
    cout<<countBST(n);

    return 0;
}