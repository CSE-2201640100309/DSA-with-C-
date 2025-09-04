#include<iostream>
#include<strings.h>
using namespace std;


int main(){
string name ="abcdefghij";
cout << name.substr(2)<<endl;
cout << name.substr(2,2)<<endl;
cout << name.substr(2,100)<<endl;
cout << name.substr(0)<<endl;
cout << name.substr(1,5)<<endl;


// aap string andar dusri string find krenge
// search a string
string name2="Love Babbar";
int ans = name2.find("Babbar",7);
cout << ans<<endl;
// to yaha woh index return krdega jaha se babbar start ho rh a

if(name2.find('j')==string::npos){
    cout<<"j is not present"<<endl;
}
else{
    cout<<"j is present"<<endl;
}

}