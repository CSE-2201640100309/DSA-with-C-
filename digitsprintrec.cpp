#include<iostream>
using namespace  std;

void  printDigits(int num){
    if(num == 0){
        return;
    }
    // 1 case solve krte has_virtual_destructor
    int digit = num%10;
    cout<< digit;
    num =num /10;

    printDigits(num);
    
}
// this is the exmaple of tail recursion

int main(){
    int num;
    cin>> num;
    printDigits(num);
}