#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sm=0;
    for(int i=1;i<n;i++){
        if (n%i==0){
            
            sm+=i;
        }
    }
    if(sm==n){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}