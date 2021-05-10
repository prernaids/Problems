#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    for(int i=1; i<=n; i++)
    {
        if(i%2!=0)
        {
            for(int j=1; j<=i; j++)
            cout<<1;
        }
        
        else
        {
            for(int j=1; j<=i; j++)
            {
                if(j<i && j>1)
                    cout<<0;
                else
                    cout<<1;
            }
            
        }
    cout<<endl; 

    }
}