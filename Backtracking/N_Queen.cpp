#include<bits/stdc++.h>
using namespace std;


void print(vector<vector<int>> board,int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0;j<n;j++)
        {
            if(board[i][j]==1)
                cout<<"Q "<<"    ";
            else
                cout<<"[]"<<"    ";
        }
        cout<<endl;
    }
}

bool isSafe(int row,int col,vector<vector<int>> board)
{
    // three conditions to check 
    // 1. row clash
    // 2. upper diagonal
    // 3. lower diagonal
    int n= board.size();
    int r = row;
    int c = col;
    while(c>=0)
    {
        if(board[r][c]==1)
            return false;
        c--;
    }
    r=row,c=col;
    while(r>=0 and c>=0)
    {
        if(board[r][c]==1)
            return false;
        r--,c--;
    }
    r=row;c=col;
    while(r<n and c>=0)
    {
        if(board[r][c]==1)
            return false;
        r++;c--;
    }

    return true;
}

bool solve(int col, vector<vector<int>> &board, int n)
{
    // base case is if col >=n, return true;
    if(col>=n)
        return true;
    
    // we need to try for each row
    for(int row=0; row<n; row++)
    {
        if(isSafe(row,col,board))
        {
            board[row][col]=1;
            
            // now we need to move ahead
            if(solve(col+1,board,n))
                return true;
            
            // if this does not give us the requirred soltution then we will backtrack
            board[row][col]=0;
        }
    }
    return false;
}
int main()
{
    int n = 5;
    vector<vector<int>> board(n,vector<int> (n,0));

    if(solve(0, board, n))
    {
        cout<<"the queen arrangement on the board is : "<<endl;
        print(board,n);
    }
}