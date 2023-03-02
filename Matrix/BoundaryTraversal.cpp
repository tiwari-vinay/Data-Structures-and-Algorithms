#include<bits/stdc++.h>
using namespace std;

            // We are printing the boundary of the matrix
            //   56 25 252 25
            //   45 25 63  56
            //   42 52 32  01    --> its boundary traverasl would be 
            //                       56 25 252 25--|
            //                                     56 --|
            //                                             01 32 52 42

void transpose(mat[R][C])
{
    for(int i=0;i<R;i+=)
    {
        for(int j=0;j<C;j++)
        {
            swap(mat[i][j],mat[j][i]);
        }
    }
}

    // in this case we have two scenarios- 
    // 1-> anticlockwise
    //     in this case last column become the first row and so on 
    // 2-> clockwise 
    //     in this case fist column become the first row, second column become the second row and so on 
    
void RotateBy90clockwise(mat[R][C])
{
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            
        }
    }
}

void Rotateby90anticlockwise(mat[R][C])
{

}

int main()
{
    vector<vector<int>> v;
    int R,C;
    R=3;C=3;
    for(int i=R;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            

        }
    } 


    return 0 ;
}