#include <iostream>
#include <Windows.h>
#include <ctime>

#include "../header/Welcome.hpp"

using namespace std;


        void Welcome::printWelcome(){
            cout << "Hi mate." << endl;
            Sleep(1000);
            cout << "What is your Name: " << endl;
            cin >> Name;
            Sleep(2000);
            cout << "Welcome To Tic Tac Toe " << Name  << "!"<< endl;
            Sleep(2000);
        }

        Welcome::Welcome(){
            printWelcome();
        }
        Welcome::~Welcome(){
            
        }


// int main() {
    
//     Welcome w;

//     return 0;
// }