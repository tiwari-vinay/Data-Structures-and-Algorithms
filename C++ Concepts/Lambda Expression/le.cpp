#include<bits/stdc++.h>
#include<conio.h>

using namespace std;

int main()
{
    int arr[]={3,33,5,-5,-663,3};
    int n= sizeof(arr)/sizeof(int);
    sort(arr,arr+n,[](int a,int b) {return abs(a)<abs(b);});
    for(auto X: arr)
        cout<<X<<"  ";
        getch();
        return 0;
}
