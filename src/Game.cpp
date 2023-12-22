#include <iostream>
#include <Windows.h>
#include <ctime>

using namespace std;

class Welcome {
    private:
        string Name;

    public:
        void printWelcome(){
            cout << "Hi mate." << endl;
            Sleep(1000);
            cout << "What is your Name: " << endl;
            cin >> Name;
            Sleep(2000);
            cout << "Welcome To Tic Tac Toe " << Name  << "!"<< endl;
            Sleep(2000);
        }

        Welcome(){
            printWelcome();
        }
};

int main() {
    
    return 0;
}