#include <iostream>
#include <Windows.h>
#include <ctime>

using namespace std;

class Welcome {
    private:

    public:
        void printWelcome(string Name){
            cout << "Hi mate." << endl;
            Sleep(1000);
            cout << "What is your Name: " << endl;
            cin >> Name;
            Sleep(2000);
            cout << "" << endl;

        }
};

int main() {
    
    return 0;
}