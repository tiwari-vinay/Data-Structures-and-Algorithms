#include<bits/stdc++.h>
using namespace std;

bool leapYear(int n){
    return (n%4==0 && n%100!=0) or (n%400==0);
}
int main()
{
    int n;
    cin>>n;
    cout<<(leapYear(n));   
    return 0;
}