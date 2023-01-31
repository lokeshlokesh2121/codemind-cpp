#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,r;
    cin>>n,r;
    int sum=0;
    while (n>0){
        r=n%10;
        sum=sum+r;
        n=n/10;
        if(n==0 and sum>9){
        n=sum;
        sum=0;
        }    
    }
    cout<<sum;
}