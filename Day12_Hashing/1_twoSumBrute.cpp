#include<iostream>
#include<vector>
using namespace std;

vector<int>twoSum(vector<int>&arr,int target){
    int size=arr.size();

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
           if(arr[i]+arr[j]==target){
            return{i,j};
           }

        }
    }
    return {};
}
int main(){
    vector<int>arr{5,2,11,7,15};
    int target=9;
    vector<int>result=twoSum(arr,target);

    cout<<"Indices:"<<result[0]<<","<<result[1]<<endl;
    return 0;
}