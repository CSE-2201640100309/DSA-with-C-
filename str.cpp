#include<iostream>
using namespace std;

int main(){
    // char arr[10]="dharmendra";
    // // cin >> arr;
    // // cout<< arr;
    // // what if i take the arr initialization as a looping array
    // // arr[0]='d';
    // // arr[1]='h';
    // // arr[2]='a';
    // // arr[3]='r';
    // // arr[4]='m';
    // // arr[5]='e';
    // // arr[6]='n';

    // // char arr ='dharmendra';
    // for(int i=0;i<10;i++){
    //     cout << arr[i];
    char arr[50];
     cin.getline(arr,50,'\t');//space can be added between characters
    // '\t' -> this is where we can give the delimeter
     cout<<arr;
    
}