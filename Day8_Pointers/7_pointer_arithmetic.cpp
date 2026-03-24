#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4};

    int a=10;
    int* ptr=&a;

    cout<<ptr<<endl;
    ptr++;
    cout<<ptr<<endl;//+4bytes

    int* pt2;//100;
    int* pt1=pt2+2;//108

    cout<<"Pointer Subtraction: "<< pt1-pt2 <<endl;//2
    cout<<"Pointer Comparision: "<<(pt1>pt2) <<endl;//1 true
    cout<<"Pointer Comparision for not equal: "<<(pt1 != pt2) <<endl;//1 true
    cout<<"Pointer Comparision for equal: "<<(pt1 == pt2) <<endl;//0 false

    return 0;
}