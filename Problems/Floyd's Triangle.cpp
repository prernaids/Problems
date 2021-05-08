#include<iostream>
using namespace std;
int main(){
    int n, k=1; cin>>n;
    for(int i=1; i<=n; i++)
    {for(int j=1; j<=i; j++)
    {
        cout<<k++<<" ";
    }
        cout<<endl;
        }
}
/*Input: 4
  Output:-  1
            2 3
            4 5 6
            7 8 9 10*/
