#include<bits/stdc++.h>
using namespace std;

int uniquePaths(int n,int m)
{
    if(n==0 or m ==0)
        return 1;
    else return uniquePaths(m,n-1)+uniquePaths(m-1,n);
}

int uniquePathsDP(int m,int n)
{
    int dp[m][n];
    for(int i=0;i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==0 or j==0)
                dp[i][j]=1;
            else 
                dp[i][j] = dp[i-1][j]+dp[i][j-1];
        }
    }
        return dp[m-1][n-1];
}

//unique paths with obstacles 
int uniquePathsObstacles(int obstacleGrid[][],int m,int n)
{
    int dp[m][n];

    //filling first row
    bool flag = 0;
    for(int i=0; i<n; i++)
    {
        if(flag || obstacleGrid[0][j] == 1)
        {
            flag = true;
            dp[0][j] = 0;
        }
        else{
            dp[0][j] = 1;
        }
    }
    // filling first column
    flag = 0;
    for(int i=0; i<m; i++)
    {
        if(flag || obstacleGrid[i][0] == 1)
        {
            flag = true;
            dp[0][j] = 0;
        }
        else{
            dp[0][j] = 1;
        }
    }

    for(int i=1; i<m; i++)
    {
        for(int j=1; j<n; j++)
        {
            if(obstacleGrid[i][j] == 1)
                dp[i][j] = 0;
            else 
                dp[i][j-1] = dp[i-1][j] + dp[i][j-1];
        }
    }
    return dp[m-1][n-1];
}

int minimumPathLength(grid[][],int m,int n)
{
    int dp[m][n];
    for(int i=0; i<m;i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==0)
                dp[i][j]=grid[i][j] + dp[i][j-1];
            if(j==0)
                dp[i][j]=grid[i][j] + dp[i-1][j];
            else 
                dp[i][j] = grid[i][j]+min(dp[i][j-1],dp[i-1][j]);
        }
    }
    return dp[m-1][n-1]
}
int main()
{
    int m = 3, n = 3;

    int obstacleGrid[m][n];
    // make the grid and pass it to the function to calculate the result  

    cout<<"Unique paths to reach last cell : "<<uniquePaths(m-1,n-1)<<endl;
    cout<<"Unique paths to reach last cell : "<<uniquePathsDP(m,n);
}