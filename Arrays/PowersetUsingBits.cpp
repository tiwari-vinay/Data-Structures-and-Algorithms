#include<bits/stdc++.h>
using namespace std;

void powerSet(string s)
{
    int n=s.length();
    int powerSize=pow(2,n);
    for(int counter=1;counter<powerSize;counter++)
    {
        for(int j=0;j<n;j++)
        {   
        
            if(counter & (1<<j))
            {
                cout<<s[j]<<" ";
            }
        }
        cout<<endl;
    }
    
}

void printSubsequences(int arr[], int n)
{
    unsigned int opsize = pow(2, n);
    for (int counter = 1; counter < opsize; counter++)
    {
        for (int j = 0; j < n; j++)
        {
            if (counter & (1<<j))
                cout << arr[j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    string s= "abc";
    int arr[]={33,4,455};
    // printSubsequences(arr,3);
    powerSet(s);
    return 0;
}