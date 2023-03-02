#include<bits/stdc++.h>
using namespace std;

class Complex{
    int real;
    int imaginary;
    public:
        Complex(int r=0,int i=0):real(r),imaginary(i){}
        Complex operator + (Complex  const &obj){
            //we can pass the object by value as well here and avoid the const, but to prevent any changes from being made to the class we could avoid it.
            
            Complex res;
            res.real=real+ obj.real;
            res.imaginary=imaginary+obj.imaginary;
            return res;
        }
        void print()
        {
            cout<<real<<"+"<<"i"<<imaginary<<endl;
        }
};
int main()
{
    // #ifndef ONLIN_JUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif
    Complex c1(2,56);
    Complex c2(5,45454);
    Complex c3=c1+c2;
    c3.print(); 
    return 0;
}
