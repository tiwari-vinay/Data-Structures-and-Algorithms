#include<bits/stdc++.h>
using namespace std;

#define N 4
// here we are considering only two movements of rat--forward and down
// two utility functions .. issafe(), solvemazeUtil(), and if the solutio exists then we will print the soltuion as well.

// time complexity = 2 raised to the power N square and space complexity is N square./

bool isSafe(int maze[N][N],int x,int y)
{
    if(x>=0 and x<N and y>=0 and y<N and maze[x][y]==1)
        return true;
    return false;
}

void print(int sol[N][N])
{
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
            cout<<sol[i][j]<<"  ";
        cout<<endl;
    }
}

bool solveMazeUtil(int maze[N][N],int sol[N][N],int x,int y);

bool solveMaze(int maze[N][N])
{
    int sol[N][N]={ { 0, 0, 0, 0 },
                      { 0, 0, 0, 0 },
                      { 0, 0, 0, 0 },
                      { 0, 0, 0, 0 } };
    if(solveMazeUtil(maze,sol,0,0)==true)
    {
        print(sol);
        return true;
    }
    return false;
}

bool solveMazeUtil(int maze[N][N],int sol[N][N],int x,int y){
    if(x==N-1 and y==N-1 and maze[x][y]==1)
    {
        sol[x][y]=1;
        return true;
    }
    
    if(isSafe(maze,x,y))
    {
        if(sol[x][y]==1)
            return false;

        sol[x][y]=1;
        if(solveMazeUtil(maze,sol,x+1,y)==true)
            {solveMazeUtil(maze,sol,x+1,y);return true;}
        if(solveMazeUtil(maze,sol,x,y+1))
            {solveMazeUtil(maze,sol,x,y+1);return true;}
        
        //if movement not possible backtrack
        sol[x][y]=0;
    }
    return false;
}

int main()
{
    int maze[N][N]={ { 1, 0, 0, 0 },
                       { 1, 1, 0, 1 },
                       { 0, 1, 0, 0 },
                       { 1, 1, 1, 1 } };
    solveMaze(maze);
    return 0;
}