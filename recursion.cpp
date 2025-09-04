#include<limits.h>
#include<iostream>
using namespace std;
void print(int arr[],int size,int index){
    if(index>=size){
        return;
    }
    cout<< arr[index]<<" ";
    print(arr,size,index+1);
}

void reverse(int *arr,int size){
    if(size<0){
        return;
    }
    cout<< arr[size]<< " ";
    reverse(arr,size-1);
}

int search(int arr[],int n,int index,int target){
    if(index>=n){
        return -1;
    }
    
    if(arr[index]==target){
        return index;
    }

    int result=search(arr,n,index+1,target);  
    
}

void getminelement(int arr[],int n,int index,int &mini ){
    // base case
    if(index >=n){
        return;
    }
    mini =min(mini ,arr[index]);
    getminelement(arr,n,index+1,mini);
    

}
void getmaxelement(int arr[],int n,int index,int &maxi ){
    // base case
    if(index >=n){
        return;
    }
    maxi =max(maxi ,arr[index]);
    getmaxelement(arr,n,index+1,maxi);
    

}

void printodd(int arr[], int size,int index){
    if(index>= size){
        return;
    }
    if(arr[index] &1){
        cout<< arr[index]<<" ";
    }
    printodd(arr,size,index+1);
}

int main(){
     int arr1[6]={1,2,3,4,5,5};
     int n= 6;
     int index=0;
    //  print(arr1,n,index);
    //  cout<<endl;
    //  reverse(arr1,n-1 );
    //  cout<< endl;
    //  int target =4;
    //  cout<< search(arr1,n,index,target);
     int mini=INT_MAX;
     int maxi=INT_MIN;
     getminelement(arr1,n,index,mini);
     cout<< " minimum value "<<mini;
     getmaxelement(arr1,n,index,maxi);
     cout<< " maximum element is "<< maxi<<endl;;
     printodd(arr1,n,index);

}