#include "stdc++.h"
using namespace std;

int main(){
    int n,res=0;
    string op;
    cin>>n;
    while(n--){
        cin>>op;
        if(op[0]=='+' || op[1] =='+')
            res++;
        else if(op[0] == '-' || op[1] == '-')
            res--;
    }
    cout<<res<<endl;
    return 0;
}