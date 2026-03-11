// Day_6
#include<iostream>
#include<vector>
using namespace std;

int maxArea(vector<int>heigth){
    int maxWater=0;

    for(int i=0;i<heigth.size();i++){
        for(int j=i+1;j<heigth.size();j++){
            int wd=j-i;
            int ht=min(heigth[i],heigth[j]);
            int currWater=wd*ht;

            maxWater=max(maxWater,currWater);
        }
    }
    return maxWater;
};

int main(){
    vector<int>height={1,8,6,2,5,4,8,3,7};

    cout<<"Maximum water:"<<maxArea(height)<<endl;
    return 0;
}
