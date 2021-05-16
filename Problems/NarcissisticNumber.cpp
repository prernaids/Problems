#include<bits/stdc++.h>

using namespace std;
int main()
{   
    int n, arm=0, b; cin>>n;
    int a=n;
    while(n>0)
    {
        b=n%10;
        n/=10;
        arm+= pow(b,3);
    }
    

    if(arm==a)
    {
        cout<<a<<" is a Narcissistic Number"<<endl;
    }
    else{
        cout<<a<<" is not a Narcissistic Number"<<endl;
    }
    return 0;
}