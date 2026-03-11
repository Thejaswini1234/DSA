// Day 6 - Container With Most Water
// Problem: LeetCode 11
// Approach: Two Pointer Technique
// Time Complexity:O(n)
// Space Complexity:O(1)
#include<iostream>
#include<vector>
using namespace std;

int maxArea(vector<int>height){
    int maxWater=0;
    int lp=0,rp=height.size()-1;

    while(lp<rp){
        int wd=rp-lp;
        int ht=min(height[lp],height[rp]);
        int currWater=wd*ht;

        maxWater=max(maxWater,currWater);

        height[lp] < height[rp] ? lp++ :rp--;
    }
    return maxWater;
};

int main(){
    vector<int>height={1,8,6,2,5,4,8,3,7};

    cout<<"Maximum height is: "<<maxArea(height)<<endl;
    return 0;
}