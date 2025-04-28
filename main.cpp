#include <iostream>
using namespace std;
int main() {
    char option1;
    string startingCity = "Canberra";
    string startingCountry = "Australia";
    string goalCity = "Sydney";
    string goalCountry = "Australia";
    string gameName = "C++ Life Simulator"; 
    string playerName;
    double balance = 0.00;
    cout << gameName << "\nBy BPA812 (2025)\n\nOptions:\n1: Play Game\n2: Exit Game\nYour Option: ";
    cin >> option1;
    if (option1 != '1'){
        cout << "Quiting " << gameName;
        exit(0);
    }
    cout << "Name Of Player: ";
    cin >> playerName;
    cout << "You are in " << startingCity << ", " << startingCountry << '.';
    cout << "Your goal is to arrive in " << goalCity << ", " << goalCountry << '.';
    cout << "Your Balance: " << balance;
    return 0;
}