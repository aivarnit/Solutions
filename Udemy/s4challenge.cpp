#include <iostream>

int main(){
    int favoriteNumber;
    std::cout << "Enter your favorite number between 1 and 100: ";
    std::cin >> favoriteNumber;
    std::cout << "\nAmazing!! Thats my favorite number too!\nNo Really!! " << favoriteNumber << " is my favorite number!\n";
    return 0;
}