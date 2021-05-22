/*Given an array of distinct integer values, count the number of pairs of integers that have a difference of K.*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int count = 0, arr[6],k, ele; cin>>k;
    int max = arr[0];
    for(int i=0; i<6; i++) { cin>>arr[i]; }

    for(int i=0; i<6; i++){
        ele = arr[i];
        for(int j =i+1; j<6; j++){
            if(abs(ele - arr[j])==k){
                count++;
            }
        }
    }
   cout<<count;
} 
/*INPUT:- 2

1 
7 
5
9 
12 
3
OUTPUT:- 4*/