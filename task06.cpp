#include <iostream>
using namespace std;

void discount(int price);
main(){

    string day;
    int price;
while(true){
    cout << "Enter Total bill: ";
    cin >> price;
    cout << "Enter day: ";
    cin >> day;

    if (day == "sunday"){
        discount (price);
    }
    if (day != "sunday"){
        cout << "Total payable: " << price << endl;
    }
}
}

void discount(int price){
    int discount = (price - (price * 0.1) ) + 1;
    cout << "Total payable: " << discount << endl;

}