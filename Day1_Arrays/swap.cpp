#include<iostream>
using namespace std;

int main(){
    int nums[]={5,15,22,1,-15,24};
    int size=sizeof(nums)/sizeof(int);

    int smallest=INT32_MAX;
    int largest=INT32_MIN;

    for(int i=0;i<size;i++){
       smallest=min(nums[i],smallest);
       largest=max(nums[i],largest);
    }

    int smallIndex=-1;
    int largeIndex=-1;

    for(int i=0;i<size;i++){
        if(nums[i]==smallest)
            smallIndex=i;
            
        if(nums[i]==largest)
            largeIndex=i;
    }

    
    cout<<"The smallest number is: "<<smallest<<" at Index "<<smallIndex<<endl;
    cout<<"The largest number is: "<<largest<<" at Index "<<largeIndex<<endl;
    return 0;
}