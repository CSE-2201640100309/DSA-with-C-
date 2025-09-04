#include<iostream>
#include<vector>
using namespace std;

pair<int,int> SearchIn2DArray(int arr[][2],int n ,int m, int target){
    for (int  i=0;i<n;i++){
        for (int j=0;j<m;j++){
            if(arr[i][j] == target){
                return {i,j};
            }
        }
    }
    return {-1,-1};
}
int main(){
    int arr[3][2];
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cin>> arr[i][j];
        }
    }
    cout<<"Input complete"<<endl;
    SearchIn2DArray(arr,3,2,6);
    return 0;
}