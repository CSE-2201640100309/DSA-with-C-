#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v;
    v.push_back(10);
v.push_back(20);
    v.push_back(30);
v.push_back(40);
v.push_back(40);
v.push_back(40);
//    cout<< "Size:"<<v.size()<< endl;
//    v.pop_back();
//    cout<< "Size:"<<v.size()<< endl;
//    cout << v.front()<<endl;

//       cout << v.back()<<endl;
//     if(v.empty()==true){
//         cout <<"Vector is empty"<<endl;
        
//     }
//     else{
//         cout<< "Vector is not empty"<<endl;

//     }

//     cout<< v.at(2)<<endl;
//     //or you can use 
//     cout<<v[2]<<endl;
//     cout<<v.capacity()<<endl;
//     cout << v.capacity()-v.size()<<endl;
//      v.reserve(20);
//      cout <<v.capacity()<<endl;
cout<< v.max_size();

cout<<v.size();
}
