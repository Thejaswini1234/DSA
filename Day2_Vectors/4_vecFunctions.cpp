#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>vec;
    cout<<"Size of vector before push_back :"<<vec.size()<<endl;

    vec.push_back(20);
    vec.push_back(21);
    vec.push_back(22);
    vec.push_back(33);

    cout<<"After push_back size :"<<vec.size()<<endl;

    vec.pop_back();//removes last index value 33

    cout<<"Front function: "<<vec.front()<<endl;
    cout<<"Back function: "<<vec.back()<<endl;

    cout<<"Accesing values using 'at' function:"<<vec.at(2)<<endl;

    for(int val :vec){
        cout<<val<<endl;
    }
    return 0;
}