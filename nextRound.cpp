#include "stdc++.h"
using namespace std;

int main(){
    int n,k,tot=0;
    cin>>n>>k;
    int a[n];
    int i=0;
    while(i<n){
        cin>>a[i++];
    }
    i=0;
    int temp = a[i];
    while(temp>0 && temp>=a[k-1] && i<n){
        tot++;
        temp = a[++i]; 
    }
    cout<<tot<<endl;
    return 0;
}