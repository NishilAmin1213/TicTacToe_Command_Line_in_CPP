#include <iostream>
#include <string>
using namespace std;
#include "player.h"
#include "game.h"

int turn = 0;
int brd[] = {0,0,0,
             0,0,0,
             0,0,0};

bool winner(){
    //to analyse the board and see if a winner has been found
    //returns true or false
    return false;
}

bool checkForFull(){
    bool res = true;
    for(int k=0;k<=8;k++){
        if(brd[k] == 0){
            res = false;
        }
    }
    return res;
}

string convert(int x){
    return "s";
}

void endGame(bool won){
    cout << "GAME ENDED" << endl;
}

void printBrd(){
    cout << brd[0] << brd[1] << brd[2] << endl;
    cout << brd[3] << brd[4] << brd[5] << endl;
    cout << brd[6] << brd[7] << brd[8] << endl;
}

void playGame(player p){
    cout << "Player "<< (p.num+1) << "'s turn" << endl;
    printBrd();
    int loc;
    cin >> loc;
    if(brd[loc-1] == 0){
        //place piece 
        turn++;
        brd[loc-1] = (p.num + 1);
    }else{
        cout << "INVALID MOVE" << endl;
        playGame(p);
    }
}

int main() {
    cout << "Hello, World!" << endl;
    cout << "TicTacToe Game C++" << endl;
    player p1("Nishil", 0, "O");
    player p2("Opponent", 1, "X");
    while(!winner()){
        if(checkForFull()){
            endGame(false);
        }
        //play game
        if (p1.num == turn%2){
            playGame(p1);
        }else{
            playGame(p2);
        }
    }

    game g;

    while(!g.winner()) {
        //g.checkForFull();

    }



}
