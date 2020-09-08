#include <iostream>
#include <map>
#include "board.h"
#include "tile.h"
using namespace std;

Board::Board()
{
    grid.insert(pair<int, Tile *>(0, new Tile('0')));
    grid.insert(pair<int, Tile *>(1, new Tile('1')));
    grid.insert(pair<int, Tile *>(2, new Tile('2')));
    grid.insert(pair<int, Tile *>(3, new Tile('3')));
    grid.insert(pair<int, Tile *>(4, new Tile('4')));
    grid.insert(pair<int, Tile *>(5, new Tile('5')));
    grid.insert(pair<int, Tile *>(6, new Tile('6')));
    grid.insert(pair<int, Tile *>(7, new Tile('7')));
    grid.insert(pair<int, Tile *>(8, new Tile('8')));
}

Board::~Board()
{
    for (auto &e : grid)
    {
        delete e.second;
    }
    grid.clear();
}

void Board::placeTile(char sym, int pos)
{
    grid.at(pos)->changeSym(sym);
}

Tile *Board::getTile(int pos)
{
    return grid.at(pos);
}

ostream &operator<<(ostream &out, Board &b)
{
    out << '\n';
    out << "          |           |          " << endl;
    out << "    " << b.getTile(0)->getSym() << "     |     " << b.getTile(1)->getSym() << "     |     " << b.getTile(2)->getSym() << "    " << endl;
    out << "          |           |          " << endl;
    out << "----------|-----------|----------" << endl;
    out << "          |           |          " << endl;
    out << "    " << b.getTile(3)->getSym() << "     |     " << b.getTile(4)->getSym() << "     |     " << b.getTile(5)->getSym() << "    " << endl;
    out << "          |           |          " << endl;
    out << "----------|-----------|----------" << endl;
    out << "          |           |          " << endl;
    out << "    " << b.getTile(6)->getSym() << "     |     " << b.getTile(7)->getSym() << "     |     " << b.getTile(8)->getSym() << "    " << endl;
    out << "          |           |          " << endl;
    return out;
}