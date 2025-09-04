#include <iostream>
using namespace std;

int main(){
    int size;
    cout << "Enter the number  of elements required in array:";
    cin >> size;
    cout<<endl;
    char arr[size];
    for(int i=0;i<size;i++){
        cout<< "Enter the"<< i+1 << " value elements";
        cin >> arr[i];
    }
    for(int i=0;i<size;i++){
        cout << arr[i] << ",";
    }
}