#include<iostream>
using namespace std;
class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.length()>0 && s.find(part)<s.length()){
            s.erase(s.find(part),part.length());
        }
        return s;
    }
};
int main(){
    Solution obj;
    string s;
    cout<<"Enter a string:";
    cin>>s;
    string part;
    cout<<"Enter part to remove:";
    cin>>part;

    cout<<obj.removeOccurrences(s,part)<<endl;
    return 0;

}