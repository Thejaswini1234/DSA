#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int>twoSum(vector<int>&arr,int target){
    unordered_map<int,int>m;
    vector<int> ans;

    for(int i=0;i<arr.size();i++){
        int first=arr[i];
        int second=target-first;

        if(m.find(second)!=m.end()){
            ans.push_back(i);
            ans.push_back(m[second]);
            break;
        }
        m[first]=i;
    }
  return ans;
}
int main(){
    vector<int>arr={1,2,5,7,6};
    int target=9;

    vector<int>ans=twoSum(arr,target);
    cout<<"Indexes of target is :"<<ans[0]<<","<<ans[1]<<endl;
    return 0;
}