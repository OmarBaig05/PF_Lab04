#include <iostream>
using namespace std;

void eligibleOrNot(int age);
main(){
int age;
while(true){
  cout << "Your age: ";
  cin >> age;
  eligibleOrNot(age);
}
}

void eligibleOrNot(int age){
    if (age >= 18){
        cout << "You are elligible to drive" << endl;
    }
    if (age < 18){
        cout << "You are not elligible to drive" << endl;
    }

}