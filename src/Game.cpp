#include <iostream>
#include <ctime>
#include <Windows.h>

#include "../header/Game.hpp"

using namespace std;


        void Game::drawBoard(){
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

        void Game::Player_Move(){
            int number;

            cout << "Enter Your Number in Which you want to place your Marker to (1-9):" << endl;
            cin >> number;
            number--;
        for(int i = 0; i < 9; i++){
            if (spaces[number] = ' ')
            {
                spaces[number] = player;
            }
        }
        drawBoard();
        }
        



int main() {
    
    Game g;
    g.drawBoard();
    g.Player_Move();
    return 0;
}