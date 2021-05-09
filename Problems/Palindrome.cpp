#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num, n, rev=0, t; cin>>num;
    t=num;
    while(num>=1){
        n=num%10;
        num/=10;
        rev=(rev*10)+n;
    }
    if(rev==t)
        cout<<"Num is Palindrome"<<endl;
    else
        cout<<"Num is not Palindrome"<<endl;
    cout<<"Reverse:- "<<rev;
    
}