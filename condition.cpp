#include <iostream>
using namespace std;

int main(){
    int score;
    cout << "Enter the score:";
    cin >> score ;
    if(score<60){
        cout << "Not pass";
    }
    else if (60 <score <=100){
        cout << "Pass";
    }

    else {
        cout  << "NA";
    }
}