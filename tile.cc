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
