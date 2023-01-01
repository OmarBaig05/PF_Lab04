#include <iostream>
using namespace std;

void discount(string day , int price);
main(){

    string day;
    int price;
while(true){
    cout << "Enter Total bill: ";
    cin >> price;
    cout << "Enter day: ";
    cin >> day;
    discount(day ,price);


}
}

void discount(string day , int price){
    int discount = (price - (price * 0.1) ) + 1;
    int discount1 = (price - (price * 0.05) ) + 1;
    if (day == "sunday"){
         cout << "Total payable: " << discount << endl;
    }
    if (day != "sunday"){
        cout << "Total payable: " << discount1 << endl;
    }
}