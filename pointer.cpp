#include<iostream>
using namespace std;

int main(){
    int a=15;
    bool t=true;
    cout<< &a<<endl;
    int *ptr= &a;
    bool *btr= &t;
    cout<< ptr<<endl;
    cout<<sizeof(ptr)<<endl;
        cout<<sizeof(btr)<<endl;
        cout<< btr;
    cout<<sizeof(a);
}