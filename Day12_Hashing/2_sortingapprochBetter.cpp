#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int>twoSum(vector<int>&arr,int target){

    sort(arr.begin(),arr.end());
    int size=arr.size();

    int st=0,end=size-1;

    while(st<end){
        int sum=arr[st]+arr[end];

        if(sum==target){
            return {arr[st],arr[end]};
        }
        else if(sum<target){
            st++;
        }
        else{
            end--;
        }
    }
    return {};
}

    
int main(){
    vector<int>arr{5,2,11,7,15};
    int target=9;

    vector<int>result=twoSum(arr,target);
    cout<<"values:"<<result[0]<<","<<result[1]<<endl;
    return 0;
}
