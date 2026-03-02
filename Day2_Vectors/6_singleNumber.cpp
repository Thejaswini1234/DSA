#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>nums={2,2,1};
    int ans=0;
    
    for(int val:nums ){
        ans^=val;
    }
    cout<<"Non repeated number is: "<<ans<<endl;
    return 0;
}