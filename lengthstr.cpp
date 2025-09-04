#include<iostream>
using namespace std;

int getlength(char arr[], int size){
    int count =0;
    while(arr[count] != '\0'){
        count++;
    }
    return count;
}

int main(){
char arr[50];
cout<< "Enter the value"<<endl;
cin>> arr;

cout<< "length of the array:"<<getlength(arr,50);
}