#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void Hanoi(int n,string A,string B,string C)
{
     if(n==1){ cout<<"Move Disc" <<n<<" from "<<A<<" to"<<C<<endl;
     return;
     }
     Hanoi(n-1,A,C,B);
     cout<<"Move disc"<<n<<" from"<<A<<" to"<<C<<endl;
     Hanoi(n-1,B,A,C);
}
int main()
{
    int disc;
    string A,B,C;
    A="A";
    B="B";
    C="C";
    cin>>disc;
    Hanoi(disc,A,B,C);
    return 0;
}