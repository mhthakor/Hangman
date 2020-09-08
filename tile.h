#ifndef __TILE__
#define __TILE__
using namespace std;

class Tile
{
    char sym;

public:
    Tile(char sym);
    ~Tile();
    void changeSym(char sym);
    char getSym();
};

#endif