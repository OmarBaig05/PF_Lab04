#include <iostream>
using namespace std;

void name(string name);
main(){
string Name; 
    while(true){
      cout << "Enter your name: ";
      cin >> Name;
      name(Name);
    }
}
void name(string name){
    if (name == "Irzam"){
        while(true){
        cout <<"" << name <<endl;
        }

    }
}
