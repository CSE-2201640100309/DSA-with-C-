#include<iostream>
using namespace std;
int fact(int n){
    if(n==1){
        return 1;
}

    int ans=fact(n-1);
    ans =n*ans;
    return ans;
}

int main(){
    int n;
    cin >> n;
    return fact(n);
}