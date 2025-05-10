#include <iostream>
#include <cstdlib>
#include <ctime>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
using namespace std;
int main() {
    //TODO:
    //  Metros
    //  Trains
    //  Buses
    //  Money
    //  Jobs
    //  Planes
    //  Passports/Visas
    //  Inventory
    //  Multiple Currencies
    //  Patcher
    system("clear");
    char option1;
    char option2;
    char option3;
    int playingGame = 1;
    string continue1;
    string startingCity = "Canberra";
    string startingCountry = "Australia";
    string goalCity = "Sydney";
    string goalCountry = "Australia";
    string gameName = "C++ Life Simulator"; 
    string playerName;
    int coinNumber;
    double balance = 0.00;
    cout << gameName << "\nBy BPA812 (2025)\n\nOptions:\n1: Play Game\n2: Exit Game\nYour Option: ";
    cin >> option1;
    if (option1 != '1'){
        cout << "Quiting " << gameName;
        exit(0);
    }
    system("clear");
    cout << "Name Of Player: ";
    cin >> playerName;
    system("clear");
    cout << "You are in " << startingCity << ", " << startingCountry << '.' << endl;
    cout << "Your goal is to arrive in " << goalCity << ", " << goalCountry << '.' << endl;
    cout << "Type any letter to continue:";
    cin >> continue1;
    while (playingGame == 1){
        system("clear");
        cout << "Your Balance: $";
        printf("%.2f",balance);
        cout << endl << "Your Options:\n" << "1) Ask For Money" << endl << "2) Go Shopping" << endl;
        cout << "Your Option: ";
        cin >> option2;
        if (option2 == '1'){
            cout << endl << "Your Options:\n" << "1) Ask for 1 hour" << endl;
            cout << "Your Option: ";
            cin >> option3;
            if (option3 == '1'){
                srand(time(0));
                system("clear");
                for (int i = 0; i < 6; i++) {
                    coinNumber = rand() % 6;
                    if(coinNumber == 0){
                        cout << "Someone gave you " << "5c." << '\n';
                        balance = (balance+0.05);
                    }
                    else if(coinNumber == 1){
                        cout << "Someone gave you " << "10c." << '\n';
                        balance = (balance+0.10);
                    }
                    else if(coinNumber == 2){
                        cout << "Someone gave you " << "20c." << '\n';
                        balance = (balance+0.20);
                    }
                    else if(coinNumber == 3){
                        cout << "Someone gave you " << "50c." << '\n';
                        balance = (balance+0.50);
                    }
                    else if(coinNumber == 4){
                        cout << "Someone gave you " << "$1." << '\n';
                        balance = (balance+1.00);
                    }
                    else if(coinNumber == 5){
                        cout << "Someone gave you " << "$2." << '\n';
                        balance = (balance+2.00);
                    }
                    sleep(3);
                }
            }

        }
    }
    return 0;
}