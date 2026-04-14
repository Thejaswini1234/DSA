#include<iostream>
#include<vector>
using namespace std;

int peakIndexInMountainArray(vector<int>&A){
    int st=1,end=A.size()-2;
    while(st<=end){
        int mid=st+(end-st)/2;

        if(A[mid-1] < A[mid] && A[mid] > A[mid+1]){
            return mid;
        }else if(A[mid-1]<A[mid]){//right
            st=mid+1;
        }else{//left
            end=mid-1;
        }
    }
    return -1;
}
int main(){
    vector<int>A={1,3,5,7,6,4,2};

    int peakIndex=peakIndexInMountainArray(A);

    cout<<"Peak Index: "<<peakIndex<<endl;
    cout<<"Peak Element: "<<A[peakIndex]<<endl;

    return 0;
}