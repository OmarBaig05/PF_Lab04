#include <iostream>
using namespace std;

void even(int number);
main(){
    int number;
while(true){
    cout << "Enter the number: ";
    cin >> number;
    even(number);
}
}

void even(int number){
    if (number % 2 == 0){
        cout << "Number is even" << endl;
    }
    if (number % 2 != 0){
        cout << "Number is odd" << endl;
    }
}