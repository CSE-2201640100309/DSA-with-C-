#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> &arr){
    for(int i=0;i<arr.size();i++){
        cout<< arr[i]<<" ";
}
cout <<endl;
}

bool mycomp(int&a,int&b){
    // return a<b;//increasing order sorting
        return a>b;//decreasing order sorting

}
int main(){
   vector<int>arr={2,3,5,67,32,445,6};
   sort(arr.begin(),arr.end());
   sort(arr.begin(),arr.end(),/*comparator */mycomp);
   print(arr);
   return 0;
}