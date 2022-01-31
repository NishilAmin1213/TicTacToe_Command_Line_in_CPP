#include <iostream>
using namespace std;

//#define NONE 0
//#define X 1
//#define O 2

class game {

private:
    //enum allows us to represent different states
    enum GamePlayer { NONE=0, X, O };

    //static const int NONE=0;
    //static const int X=1;
    //static const int O=2;

    int turn = 0;
    GamePlayer brd[9];

public:

    game();
    game(const game&);

    int getTurn() const;

    bool winner() const;

    bool checkForFull() const;

    bool makeMove(int);

    friend ostream& operator <<(ostream&, const game&);


};


