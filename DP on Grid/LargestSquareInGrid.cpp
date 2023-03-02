#include<bits/stdc++.h>
using namespace std;

int max_square(int matrix[][5],int rows,int cols,int &max_side)   
{
    int dp[rows][cols];

    for(int i=0;i<rows; i++){
        dp[i][0] = matrix[i][0];
        max_side = max(max_side,dp[i][0]);
    }
    for(int i=0;i<cols; i++){
        dp[0][i] = matrix[0][i];
        max_side = max(max_side,dp[0][i]);
    }

    for(int i=1; i<rows; i++)
    {
        for(int j=1; j<cols; j++)
        {
            if(matrix[i][j]==1)
                dp[i][j] = 0;
            else{
                dp[i][i] = 1+ min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]));
                max_side=max(max_side,dp[i][j]);
            }
        }
    }
    return max_side;
}
void printMaxSubSquare(bool M[R][C])
{
    int i, j;
    int S[R][C];
    int max_of_s, max_i, max_j;
 
    /* Set first column of S[][]*/
    for (i = 0; i < R; i++)
        S[i][0] = M[i][0];
 
    /* Set first row of S[][]*/
    for (j = 0; j < C; j++)
        S[0][j] = M[0][j];
 
    /* Construct other entries of S[][]*/
    for (i = 1; i < R; i++) {
        for (j = 1; j < C; j++) {
            if (M[i][j] == 1)
                S[i][j]
                    = min({ S[i][j - 1], S[i - 1][j],
                            S[i - 1][j - 1] })
                      + 1; // better of using min in case of
                           // arguments more than 2
            else
                S[i][j] = 0;
        }
}}
int main()
{
    int arr[4][5]={1,0,1,0,0,1,0,1,1,1,1,1,1,1,1,1,0,0,1,0};
    int rows = 4; int cols = 5;
    int max_side=0;
    max_square(arr,rows,cols,max_side);
    cout<<"max square size is : "<<max_side;
    return 0;
}