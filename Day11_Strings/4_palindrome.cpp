#include<iostream>
#include<string>
using namespace std;

bool isPalindrome(const string &str){
    int st=0,end=str.length()-1;
    while(st<end){
        if(str[st]!=str[end]){
            return false;
        }
        st++;
        end--;
    }
    return true;
}
int main(){
    string str;
    cin>>str;
    if(isPalindrome(str))
    cout<<"palindrome";
    else
    cout<<"Not palindrome";

    return 0;
}