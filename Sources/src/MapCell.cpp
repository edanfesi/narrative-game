#include "../../Headers/include/MapCell.h"

MapCell::MapCell(){
    id = ' ';
}

MapCell::~MapCell(){}

bool MapCell::isBlocked(){
    if (id == '.')
        return true;
    else
        return false;
}