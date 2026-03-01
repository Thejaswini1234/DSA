#include<iostream>
using namespace std;

int main(){
    int nums[]={1,2,3,4};
    int size=sizeof(nums)/sizeof(int);
    
    int sum=0;
    int product=1;
    
    for(int i=0;i<size;i++){
        sum+=nums[i];
        product*=nums[i];
    }
    cout<<"Sum of Array elements: "<<sum<<endl;
    cout<<"Product of Array elements: "<<product<<endl;
    return 0;

}