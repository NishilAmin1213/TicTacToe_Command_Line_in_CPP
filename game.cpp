#include "game.h"

game::game(): turn(0) {
    for(int i=0; i<9; i++) brd[i]=GamePlayer::NONE;
}

game::game(const game& g): turn(g.turn) {
    for(int i=0; i<9; i++) brd[i]=g.brd[i];
}

int game::getTurn() const{
    return turn;
}

bool game::winner() const {
    return false;
}

bool game::checkForFull() const{
    bool res = true;
    for(int k=0;k<=8;k++){
        if(brd[k] == 0){
            res = false;
        }
    }
    return res;
}

bool game::makeMove(int loc){
    if(brd[loc - 1] == GamePlayer::NONE) {
        if (turn % 2 == 0) {
            //player 1
            brd[loc - 1] = GamePlayer::X;
        } else {
            //player 2
            brd[loc - 1] = GamePlayer::O;
        }
        return true; //move made successfully
    }
    return false; //no move has been made
}

ostream& operator <<(ostream& out, const game& g) {
    out << g.brd[0] << g.brd[1] << g.brd[2] << endl;
    out << g.brd[3] << g.brd[4] << g.brd[5] << endl;
    out << g.brd[6] << g.brd[7] << g.brd[8] << endl;
    return out;
}

