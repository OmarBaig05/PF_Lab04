#include <iostream>
using namespace std;

void sumOnly(int , int);
main(){
    int number1;
    int number2;
    char func;
while(true){
    cout << "Enter 1st number: ";
    cin >> number1;
    cout << "Enter 2nd number: ";
    cin >> number2;
    cout << "Choose the operator(+,-,/,*): ";
    cin >> func;
    if(func == '+'){
        sumOnly(number1 , number2);
    }
  }
}

void sumOnly(int num1, int num2){
    int sum = num1 + num2;
    cout << "The sum is: " << sum<< endl;
}