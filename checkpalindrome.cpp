#include<iostream>
#include<cstring>
using namespace std;

bool check_palindrome( char arr[],int size){
    int s=0;
    int e=strlen(arr)-1;
    while(s <= e){
        if(arr[s]!=arr[e]){
            return false;
        }
        else{
            s++;
            e--;
            return true;
        }
    }
    
}
int main(){
    char arr[50];
    cout <<"Enter the string:"<<endl;
    cin>> arr;
    bool ans=check_palindrome(arr,50);
    cout<<ans;
}
