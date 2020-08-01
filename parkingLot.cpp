#include<iostream>
#define ll long long
using namespace std;
 
ll power(ll a, ll b){
    ll result = 1;
    while(b){
        if(b%2)
            result *=a;
        a *=a;
        b /=2;
    }
    return result;
}
int main(){
    int n;
    cin>>n;
    ll result = 2*4*3*power(4,n-3) + (n-3)*4*9*power(4,n-4);
    cout<<result<<endl;
    return 0;
}