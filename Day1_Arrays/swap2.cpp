#include<iostream>
using namespace std;
int main(){
    
    int nums[]={5,15,22,1,-15,24};
    int size=sizeof(nums)/sizeof(int);

    int smallest=INT32_MAX;
    int largest=INT32_MIN;

    int smallIndex=0;
    int largeIndex=0;

    for(int i=0;i<size;i++){
        if(nums[i]<smallest){
            smallest=nums[i];
            smallIndex=i;
        }
        if(nums[i]>largest){
            largest=nums[i];
            largeIndex=i;
        }
    }
    int temp=nums[smallIndex];
    nums[smallIndex]=nums[largeIndex];
    nums[largeIndex]=temp;

    cout<<"Array  after swapping min and max:\n";
    for(int i=0;i<size;i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}