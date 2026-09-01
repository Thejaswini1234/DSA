#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Solution{
    public:
    void reverseString(vector<char>&s){
        int start=0,end=s.size()-1;
        while(start<end){
            swap(s[start++],s[end--]);
        }
    }
};
int main(){
    Solution obj;
    vector<char> s={'h','e','l','l','o'};

    obj.reverseString(s);
    for(char ch:s){
        cout<<ch;
    }
    return 0;


}
