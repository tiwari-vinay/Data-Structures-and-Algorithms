#include<bits/stdc++.h>
using namespace std;
#define r1 4
#define c1 4
#define r2 4
#define c2 4

void matrixMultiplication(int A[r1][c1],int B[r2][c2],int res[r1][c2])
{
    for(int i=0;i<r1;i++)
    {
        
        for(int j=0;j<c2;j++)
        {res[i][j]=0;
            for(int k=0;k<r1;k++)
            { 
                res[i][j]+=A[i][k]*B[k][j];
            }
           cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}


int main()
{

     int mat1[r1][c1] = {
            {1, 1, 1, 1},
            {2, 2, 2, 2},
            {3, 3, 3, 3},
            {4, 4, 4, 4}
    };
 
    int mat2[r2][c2] = {
            {1, 1, 1, 1},
            {2, 2, 2, 2},
            {3, 3, 3, 3},
            {4, 4, 4, 4}
    };
    int res[r1][c2];
    matrixMultiplication(mat1,mat2,res);

    return 0 ;
}