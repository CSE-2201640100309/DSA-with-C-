#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
    // first method to declare map or key value pair
    unordered_map<string,string> table;
    table["in"]="India";

    // 2nd method to declare
    table.insert(make_pair("en","England"));


    // 3rd method 
    pair<string,string> p;
    p.first="br";
    p.second ="Brazil";

    table.insert(p);


    // now we will print the map
    unordered_map<string,string>:: iterator it =table.begin();

    while(it != table.end()){
        pair<string,string> p=*it;
        cout <<p.first << " " <<p.second <<endl;
        it++;
    }


}