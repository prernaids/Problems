#include<iostream>
using namespace std;

int main(){
   int k,w,n,monk=0; cin>>k>>n>>w;

   for(int i=1; i<=w; i++){
       monk+=(k*i);
   }
    if(monk>n){
        cout<<abs(monk-n);
    }
    else  cout<<0; 
}