#include <iostream>
#include "tile.h"
using namespace std;

Tile::Tile(char sym) : sym{sym} {}

Tile::~Tile() {}

char Tile::getSym()
{
    return sym;
}

void Tile::changeSym(char s)
{
    sym = s;
}

bool Tile::empty()
{
    if ((sym != 'O') || (sym != 'X'))
    {
        return true;
    }
    else
    {
        return false;
    }
}