#include <iostream>
#include <ctime>
#include <Windows.h>

using namespace std;

class Game {
    private:
        char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
        char player = 'X';
        char computer = 'O';
        bool running = true;

    public:
        void drawBoard(){
            cout << "     |     |     " << endl;
            cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "  " << endl;
            cout << "     |     |     " << endl;
            cout << "-----------------" << endl;
            cout << "     |     |     " << endl;
            cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "  " << endl;
            cout << "     |     |     " << endl;
            cout << "-----------------" << endl;
            cout << "     |     |     " << endl;
            cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "  " << endl;
            cout << "     |     |     " << endl;
        }
        void Player_Move(){

        }

};

int main() {
    
    Game g;
    g.drawBoard();
    return 0;
}