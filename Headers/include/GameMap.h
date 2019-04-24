#ifndef GAMEMAP_H
#define GAMEMAP_H

#include "MapCell.h"

class GameMap
{
    public:
        MapCell cells[15][10];
        MapCell* playerCell;

        GameMap();
        virtual ~GameMap();
        void draw();

        // Obtienes las coordenadas del player y lo dibuja en el mapa.
        bool setPlayerCell(int playerX, int playerY);

    protected:
        void loadMapFromFile();
};

#endif // GAMEMAP_H