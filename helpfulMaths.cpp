#include "stdc++.h"
using namespace std;

int main(){

    string exp;
    vector<int> nums;
    cin>>exp;
    int j=0;
    for(int i=0;i<exp.length();i++){
        if(exp[i]!='+'){
            nums.push_back(exp[i]-'0');
        }
    }
    sort(nums.begin(),nums.end());
    string result = to_string(nums[0]);
    for(int k=1;k<nums.size();k++){
        result+=("+"+to_string(nums[k]));
    }
    cout<<result<<endl;
    return 0;
}