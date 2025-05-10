#include <iostream>
#include <fstream>
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
    char option4;
    char option5;
    int playingGame = 1;
    int beggingTime;
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
        cout << endl << "Your Options:\n" << "1) Ask For Money" << endl << "2) Go To A Store" << "3) Travel" << endl;
        cout << "Your Option: ";
        cin >> option2;
        if (option2 == '1'){
            cout << endl << "Your Options:\n" << "1) Ask for 30 minutes" << endl << "2) Ask for 1 hour" << endl << "3) Ask for 2 hours" << endl;
            cout << "Your Option: ";
            cin >> option3;
            if (option3 == '1'){
                srand(time(0));
                beggingTime = 3;
            }else if(option3 == '2'){
                beggingTime = 6;
            }else if(option3 == '2'){
                beggingTime = 12;
            }
            system("clear");
            for (int i = 0; i < beggingTime; i++) {
                coinNumber = rand() % 21;
                if(coinNumber == 15 || coinNumber == 16 || coinNumber == 17 || coinNumber == 18 || coinNumber == 19 || coinNumber == 20){
                    cout << "Someone gave you " << "5c." << '\n';
                    balance = (balance+0.05);
                }else if(coinNumber == 10 || coinNumber == 11 || coinNumber == 12 || coinNumber == 13 || coinNumber == 14){
                    cout << "Someone gave you " << "10c." << '\n';
                    balance = (balance+0.10);
                }else if(coinNumber == 6 || coinNumber == 7 || coinNumber == 8 || coinNumber == 9){
                    cout << "Someone gave you " << "20c." << '\n';
                    balance = (balance+0.20);
                }else if(coinNumber == 3 || coinNumber == 4 || coinNumber == 5){
                    cout << "Someone gave you " << "50c." << '\n';
                    balance = (balance+0.50);
                }else if(coinNumber == 1 || coinNumber == 2){
                    cout << "Someone gave you " << "$1." << '\n';
                    balance = (balance+1.00);
                }else if(coinNumber == 0){
                    cout << "Someone gave you " << "$2." << '\n';
                    balance = (balance+2.00);
                }
                sleep(3);
            }
        }else if (option2 == '2'){
            system("clear");
            cout << endl << "Your Store Options:\n" << "1) 7:11" << endl << "2) Apple" << endl << "3) Flight Centre" << endl << "4) Australia Post" << endl;
            cout << "Your Option: ";
            cin >> option4;
            if (option4 == '1'){
                system("clear");
                cout << "Work In Progress";
            }else if (option4 == '2'){
                system("clear");
                cout << "Work In Progress";
            }else if (option4 == '3'){
                system("clear");
                cout << "Work In Progress";
            }else if (option4 == '4'){
                system("clear");
                cout << endl << "Your Options:\n" << "1) Recieve Letter" << endl << "2) Send Letter" << endl;
                cout << "Your Option: ";
                cin >> option5;
            }
        }else if (option2 == '3'){
            cout << "Work In Progress";
        }
    }
    return 0;
}