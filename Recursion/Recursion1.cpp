#include<iostream>
using namespace std;
void Print_first_n(int n)
{
    if(n==0) return ;
    cout<<n<<" ";
    Print_first_n(n-1);
}
void Print_firstn_from_last(int n)
{
    if(n==0) return ;
    Print_firstn_from_last(n-1);
    cout<<n<<" ";
}
// tail recursive function for the printing of the first n integers 
void Print_tail_rec(int n,int k=1)
{
    if(n==0) return ;
    cout<<k<<" ";
    Print_tail_rec(n-1,k+1);
}
int main()
{
    int n;
    cin>>n;
    Print_first_n(n);
    cout<<endl;
    Print_firstn_from_last(n);
    cout<<endl;
    Print_tail_rec(n);

    return 0;
                  
}