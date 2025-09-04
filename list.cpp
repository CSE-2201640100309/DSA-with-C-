#include<iostream>
#include<list>
using namespace std;

int main(){
    // creation
    list<int> mylist; 

    // insertion
    mylist.push_back(10);
    mylist.push_back(20);
    mylist.push_back(30);
    mylist.push_back(40);

    mylist.push_front(5);
    mylist.pop_back();
    mylist.pop_front();

    // cout<< mylist.front();
    // cout<< mylist.size()<<endl;
    // mylist.clear();
    // cout<< mylist.size();

    // if(mylist.empty() ==true){
    //     cout <<"empty";
    // }
    // else{
    //     cout<< "not";
    // }
    mylist.push_back(10);
   
    list<int>::iterator it= mylist.begin();
    while(it != mylist.end()){
    cout << *it<<" " ;
    it++;
 


    // cout<<"before removing";

    // mylist.remove(10);
    // cout<<"after removing";
    //   list<int>::iterator it2= mylist.begin();
    // while(it2 != mylist.end()){
    // cout << *it2<<" " ;
    // it2++;
    // }
    return 0;

    }}