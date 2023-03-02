#include <bits/stdc++.h>
using namespace std;

bool canSum(int target, vector<int> arr)
{
    vector<bool> table(target + 1);
    table[0] = true;
    for (int i = 0; i <= target; i++)
    {
        if(table[i]==true)
            for(auto X:arr)
                table[i+X]=true;
    }

    return table[target];
}

int main()
{
    int target = 3533354;
    vector<int> arr = {2,4};
    cout<<canSum(target,arr);

    return 0;
}

// Problem 1: fibonacci Series

// int fib(int n)
// {
//     int f[n+1];
//     f[0]=0;
//     f[1]=1;
//     int i;
//     for(i=2;i<=n;i++)
//       f[i]=f[i-1]+f[i-2];

//    return f[n];
// }


// problem 2 : Grid Traveller Problem

// int gridTravellor(int m, int n)
// {
//    if(m==0 or n==0)
//       return 0;
//    if(m==1 and n==1)
//       return 1;
   
//    return gridTravellor(m-1,n)+gridTravellor(m,n-1);

// }

// //int tabulation solution 
// int sol(int m , int n)
// {
//    int res[m][n];
//    for(int i=0;i<m;i++)
//       res[i][0]=1;
//    for(int i=0;i<n;i++)
//       res[0][i]=1;
//    for(int i=1;i<m;i++)
//       for(int j=1;j<n;j++)
//          res[i][j]=res[i-1][j]+res[i][j-1];
//    return res[m-1][n-1];
// }

// Problem : 3 tabulation solutionof the can sum problem
// bool sol(int k, vector<int> arr)
// {
//    bool tab[k+1];
//    tab[0]=true;
//    for(int i=0;i<=k;i++)
//    {
//       if(tab[i])
//       {
//          for(auto x: arr)
//          {
//             if(i+x<=k)
//                tab[i+x]=true;
//          }
//       }
//    }
//    return tab[k];
// }
