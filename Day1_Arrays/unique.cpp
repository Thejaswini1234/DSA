#include<iostream>
using namespace std;

int main(){
    int nums[]={1,2,2,3,4,4,5};
    int size=sizeof(nums)/sizeof(int);

    for(int i=0;i<size;i++){
        int count=0;
        for(int j=0;j<size;j++){
            if(nums[i]==nums[j]){
                count++;
            }
        }
        if(count==1){
            cout<<nums[i]<<" ";
        }
    }
    return 0;
}