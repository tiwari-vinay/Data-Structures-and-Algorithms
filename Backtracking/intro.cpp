// Generating all the possible strings of a n bits.

#include<bits/stdc++.h>
using namespace std;

void binary(vector<char> &A,int n)
{
    if(n<1)
        {for(auto x: A)
            cout<<x;
        cout<<endl;
        }
    else{
        A[n-1]='1';
        binary(A,n-1);
        A[n-1]='0';
        binary(A,n-1);
    }
}
int main()
{
    vector<char> A(4);
    int n = 4;
    binary(A,n);
    return 0;
}