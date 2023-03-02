#include<bits/stdc++.h>
using namespace std;
 
void BruteForceMethod(string &T,string &P)
{
    int n=T.length();
    int m=P.length();
    for(int i=0;i<n-m;i++)
    {
        int j=0;
        while(j<m and T[i+j]==P[j])
            j=j+1;
        if(j==m)
            cout<<"pattern found at index:"<<i<<endl;
    }
}

int main()
{
    string T="hello there what is going hat onhat hatre?";
    string P="hat";
    BruteForceMethod(T,P);
    return 0;

}