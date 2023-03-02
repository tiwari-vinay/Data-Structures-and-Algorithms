#include<iostream>
#include<iomanip>
#include<cmath>
#include<conio.h>
#include<bits/stdc++.h>

using namespace std;


// Time Complexity is theta(num of digits) for this method of palindrome testing of a number
string Palindrome(int n)
{
    if(n/10==0)
    return "yes";
    int temp=n;
    int rev=0;
    while(temp>0)
    {
        int x=temp%10;
        rev=rev*10+x;
        temp/=10;
    }
    if(rev==n)
    return "yes";
    else return "no";
   
}
int palindrome(int n)
{
	stack<int> s;
	while(n>0)
	{
		int x=n%10;
		s.push(x);
		n/=10;
	}
	int reverse=0;int i=0;
	while(!s.top()==NULL)
	{
		reverse+= s.top()*pow(10,i);
		s.pop();
		i++;
	}
	if(reverse==n)
		cout<<"P";
	else cout<<"NP";
}
int main()
{

    int n=55985316;
    cout<<palindrome(n);
    getch();
    return 0;
}

