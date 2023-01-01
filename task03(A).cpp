#include <iostream>
using namespace std;

void greaterThan50(int number);
main(){
int number;
    while(true){
        cout << "Enter the number: ";
        cin >> number;
        greaterThan50(number);
    }   

}

void greaterThan50(int number){
    if(number > 50){
        cout << "Pass" <<endl;
    }

}