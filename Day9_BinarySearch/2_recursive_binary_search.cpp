#include<iostream>
#include<vector>
using namespace std;

int recBinarySearch(vector<int>arr,int tar,int start,int end ){
    if(start<=end){
        int mid=start+(end-start)/2;

        if(tar>arr[mid]){
            return recBinarySearch(arr,tar,mid+1,end);
        }
        else if(tar<arr[mid]){
            return recBinarySearch(arr,tar,start,mid-1);
        }
        else{
            return mid;
        }
        return -1;
    }
}
int main(){
        vector<int> arr2 = {-1,0,3,5,9,12};
    int tar2 = 0;

    int n = arr2.size();  

    cout << recBinarySearch(arr2, tar2, 0, n-1);

    return 0;
}