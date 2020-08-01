#include "stdc++.h"
using namespace std;

int main(){
    
    int a[5][5];
    int j=0;
    int num;
    int iPos,jPos;
    for(int i=0;i<5;i++){
        if(j==5)
            j=0;
        while(j<5){
        cin>>num;
        if(num == 1){
            iPos = i;
            jPos = j;
        }
        a[i][j++] = num;
        }
    }
    int moves = abs(iPos-2)+abs(jPos-2);
    cout<<moves<<endl;
    return 0;

}