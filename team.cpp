#include "stdc++.h"
using namespace std;

int main()
{
    int n,p,v,t,res;
    cin>>n;
    res=0;
    while(n--){
        cin>>p>>v>>t;
        if((p+v+t)>=2)
            res+=1;
    }
    cout<<res<<endl;
    return 0;

}