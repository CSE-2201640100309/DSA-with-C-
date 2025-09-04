#include<iostream>
#include<cstring>
using namespace std;
int getlength1(char arr[],int size){
    int count=0;
    while(arr[count]!= \'0'){
        count++;
    }
    return count;
}
int main(){
    char arr[50];
    cout<<"Enter the value:"<<end;
    cin>> arr;
    cout<<"Length of the array is :"<<getlength(arr,50);
    cout<<strlen(arr)<<endl; 
}