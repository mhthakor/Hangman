#ifndef __BOARD__
#define __BOARD__
using namespace std;
#include <map>

class Tile;

class Board
{
    map<int, Tile *> grid;

public:
    Board();
    ~Board();
    void placeTile(char sym, int pos);
    Tile *getTile(int pos);
    bool match(char sym);
    friend ostream &operator<<(ostream &os, Board &b);
};

ostream &operator<<(ostream &os, Board &b);

#endif