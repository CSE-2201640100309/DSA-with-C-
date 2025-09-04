#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> &arr){
    for(int i=0;i<arr.size();i++){
        cout<< arr[i]<<" ";
    }
}

void selection_sort(vector<int> &arr){
    int n= arr.size();
    for(int outerloop=0;outerloop<n-1;outerloop++){
        int minIndex =outerloop;
        for(int j=outerloop+1;j<n;j++){
            if (arr[j]< arr[minIndex]){
                    minIndex=j;
            }
        }
        swap(arr[outerloop],arr[minIndex]);
    }
}

int main(){
    vector<int> arr={3,6,1,4,5,6};

    selection_sort(arr);
    print(arr);
    return 0;

}