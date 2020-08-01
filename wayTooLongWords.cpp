#include "stdc++.h"
using namespace std;

int main(){
    string s;
    int k;
    cin>>k;
    while(k--){
        cin>>s;
    if(s.length()>10){
        cout<<s[0]<<s.length()-2<<s[s.length()-1];
    }
    else{
        cout<<s;
    }
    }
}