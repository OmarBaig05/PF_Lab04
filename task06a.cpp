#include <iostream>
using namespace std;

void name(string name);
main(){
    string YourName; 
    cout << "Enter your name: ";
    cin >> YourName;
    name(YourName);
}

void name(string name){
    while(true){
    cout <<"" << name <<endl;
}
}