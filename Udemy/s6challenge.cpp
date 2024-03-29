#include <iostream>
using namespace std;

int main(){
    int smallRooms, largeRooms;
    double cost, estimate, tax;
    cout << "Hello, welcome to Frank's Carpet Cleaning Service\nHow many small rooms would you like cleaned? ";
    cin >> smallRooms;
    cout << "How many large rooms would you like cleaned? ";
    cin >> largeRooms;
    cost = (smallRooms * 25) + (largeRooms * 35);
    tax = cost * 0.06;
    estimate = cost + tax;
    cout << "\nEstimate for Carpet cleaning service\n";
    cout << "Number of small rooms: " << smallRooms;
    cout << "\nNumber of large rooms: " << largeRooms;
    cout << "Price per small room: $25\nPrice per large room: $35\n";
    cout << "Cost : $" << cost;
    cout << "\nTax : $" << tax;
    cout << "\n= = = = = = = = = = = = = = = = = = = = =\n";
    cout << "Total estimate: $" << estimate << "\nThis estimate is valid for 30 days\n*/";
    return 0;

}