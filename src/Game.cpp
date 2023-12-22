#include <iostream>
#include <ctime>
#include <Windows.h>

using namespace std;

class Game {
    private:
        string spaces[9] = {"1", " ", " ", " ", " ", " ", " ", " ", " "};
        char player = 'X';
        char computer = 'O';
        bool running = true;

    public:
        void drawBoard(){
            cout << "     |     |     " << endl;
            cout << "     |     |     " << endl;
            cout << "     |     |     " << endl;
            cout << "-----------------" << endl;
            cout << "     |     |     " << endl;
            cout << "     |     |     " << endl;
            cout << "     |     |     " << endl;
            cout << "-----------------" << endl;
            cout << "     |     |     " << endl;
            cout << "     |     |     " << endl;
            cout << "     |     |     " << endl;
        }
};

int main() {
    
    Game g;
    g.drawBoard();
    return 0;
}