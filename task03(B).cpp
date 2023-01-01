#include <iostream>
using namespace std;

void printNumber(int number);
main(){
int number;
while(true){
    cout << "Enter number: ";
    cin  >> number;
    printNumber( number);
}
}
void printNumber(int number){
    cout << "output: " <<number << endl;
}