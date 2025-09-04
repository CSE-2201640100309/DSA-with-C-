#include<iostream>
#include<vector>
using namespace std;

int main (){
    vector<vector<int>> v (4,vector<int>(2,0));
    cout << v.size()<< endl;
    cout << v[0].size();
}