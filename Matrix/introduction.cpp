#include<bits/stdc++.h>
using namespace std;


void print(int arr[][c],int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<arr[i][j]<<" ";
        }
    }
}
int main()
{
    // taking input for row and column 
    int r,c;
    cout<<"enter the row and column sizes:";
    cin>>r>>c;

    // Method 1:
    // int arr[r][c];
    // for(int i=0;i<r;i++)
    // {
    //     for(int j=0;j<c;j++)
    //     {
    //         int tmp=0;cin>>tmp;
    //         arr[i][j]=tmp;
    //     }
    // }

    // Method 2:
    int **arr;
    arr=new int*[r];
    for(int i=0;i<r;i++)
    {
        arr[i]=new int[c];
    }
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
        {
            arr[i][j]=10;
        }

    // Method 3:
    // vector<vector<int>> arr;
    // for(int i=0;i<r;i++)
    // {
    //     vector<int> v;
    //     for(int j=0;j<c;j++)
    //         {
    //             v.push_back(5);
    //         }
    //     arr.push_back(v);
    // }


    // This is used for printing the the matrix
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }

    cout<<"\n";
    print(arr,r,c);
    return 0 ;
}