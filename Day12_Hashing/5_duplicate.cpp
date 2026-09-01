#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int findDup(vector<int>&nums){
    unordered_set<int>s;

    for(int val:nums){
        if(s.find(val)!=s.end()){
            return val;
        }
        s.insert(val);
    }
    return -1;
}
int main(){
    vector<int>nums={1,2,3,3,3};
    int result=findDup(nums);
    cout<<"Result is:"<<result<<endl;
    return 0;
}

