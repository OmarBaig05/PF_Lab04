#include <iostream>
using namespace std;

void sum(int , int);
void difference(int , int);
void divide(int , int);
void product(int , int);
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
        sum(number1 , number2);
    }
    if(func == '-'){
        difference(number1 , number2);
    }
    if(func == '*'){
        product(number1 , number2);
    }
    if(func == '/'){
        divide(number1 , number2);
    }
  }
}

void sum(int num1, int num2){
    int sum = num1 + num2;
    cout << "The sum is: " << sum<< endl;
}
void difference(int num1, int num2){
    int difference = num1 - num2;
    cout << "The difference is: " << difference << endl;
}
void product(int num1, int num2){
    int product = num1 * num2;
    cout << "The product is: " << product << endl;
}
void divide(int num1, int num2){
    int divide = num1 / num2;
    cout << "The division is: " << divide << endl;
}