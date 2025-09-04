#include<iostream>
#include<vector>
using namespace std;

int binrysrch(vector<int>& arr,int s,int e , int target){
    
    if(s>e){
        return -1;
    }
    int mid=(s+e)/2;
    if(arr[mid]== target){
        return mid;
    }

    if (arr[mid]>target){
        int ans=binrysrch(arr,s,mid-1,target);
       
    }
    else{
        int ans =binrysrch(arr,mid+1,e,target);
        
    }
}

int main(){
    vector<int> arr={2, 5, 10, 15, 20, 25, 30, 78, 99};

    int n=arr.size();
   
    int target=78;
    int res=binrysrch(arr,0,n-1,target);
    if (res != -1)
        cout << "Element found at index: " << res << endl;
    else
        cout << "Element not found" << endl;
}