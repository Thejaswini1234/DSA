#include<iostream>
using namespace std;
int main(){

    int marks[5]={92,93,94,96,97};
    int size=sizeof(marks)/sizeof(int);// 20/4=5

    for(int i=0;i<size;i++){
        cout<<marks[i]<<endl;
    }

    return 0;
}