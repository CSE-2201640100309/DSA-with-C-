#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    vector<int> arr;
    arr.push_back(10);
arr.push_back(20);
arr.push_back(30);
arr.push_back(40);
arr.push_back(50);
arr.push_back(60);

bool ans= binary_search(arr.begin(),arr.end(),(arr[2]*3));
if(ans==true){
    cout << "Found";
}
else{
    cout <<"Not Found";
}
return 0;
}
