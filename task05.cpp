#include <iostream>
using namespace std;

void greaterNUmber(int number1 , int number2);
main(){

    int num1;
    int num2;
while(true){
    cout << "Enter 1st number: ";
    cin >> num1;
    cout << "Enter 2nd number: ";
    cin >> num2;
    greaterNUmber( num1 , num2);
}
}

void greaterNUmber(int number1 , int number2){
    if (number1 > number2){
        cout << "1st number is greater" <<endl;
        cout <<"_______________________________"<<endl;
    }
    if (number1 < number2){
        cout << "2nd number is greater" <<endl;
        cout <<"_______________________________"<<endl;
    }

}