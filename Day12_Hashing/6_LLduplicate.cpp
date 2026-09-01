#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int findDuplicate(vector<int>& arr) {
      int slow=arr[0],fast=arr[0];

      do{
        slow=arr[slow];
        fast=arr[arr[fast]];
      }while(slow!=fast);

      slow=arr[0];

      while(slow!=fast){
         slow=arr[slow];
        fast=arr[fast];
        
      }
      return slow;
    }
};
int main(){
    Solution obj;
    vector<int>arr={1,2,3,4,3};
    
    int dup=obj.findDuplicate(arr);
        cout<<"Duplicate val is:"<< dup;
return 0;
}