// here we will create string
#include<iostream>
#include<cstring>
using namespace std;

int main(){
    string s;
    string name ="Tushar";
    string fullname ="Daring Tushar";
    getline(cin,s);
    s.push_back('V');
    cout<<"kya likha tha "<<s;
    cout<< name<<endl<<fullname;
    cout<< "length"<<s.length()<<endl;
}