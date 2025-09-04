#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    // int arr[]={5,6,78,9,0,9};
    // int *ptr = arr;
    // char ch[100]="Babbar";
    // char *ctr=ch;
    // cout << arr <<endl;
    // cout<< ptr<<endl;
    // cout << &arr[1]<<endl;
    //     cout<< *ptr<<endl;
    //     cout <<ctr;
    string s="Rad";
    string *p= &s;
    cout<< *p;

}