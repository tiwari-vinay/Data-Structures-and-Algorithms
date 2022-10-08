#include<iostream>
#include<iomanip>       
 #include<cmath>       // log=log(n) to the base e,log10(n)=log to the base 10;
//  ceil and floor functions are also defined in the same library <cmath>
using namespace std;


// Iterative solution 
int  countFunction(int n)
{
    if(n==0) return 0;
    return 1+countFunction(n/10);
}


// Logarithmic solution
int logarithmicCount(int n)
{
    return floor(log10(n)+1);
}


int main()
{
   int n;
    cin>>n;
    cout<<countFunction(n);
    return 0;
}