#ifndef GAME_HPP
#define GAME_HPP

class Game {
    private:
        char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
        char player = 'X';
        char computer = 'O';
        bool running = true;
    public:
    void drawBoard();
    void Player_Move();

};

#endif