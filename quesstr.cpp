#include<iostream>
#include<cstring>
using namespace std;

void replacebyX(char arr[],int size){
    for(int i=0;i<size;i++){
        if (arr[i]==' '){
            arr[i]='X';
        }
    }
   
}
int main(){
   char arr[50];
   cout <<"Enter the value";
   cin.getline(arr,50) ;
   replacebyX(arr,50);
   cout<<arr;
}