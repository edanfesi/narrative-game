#ifndef MAPCELL_H
#define MAPCELL_H

class MapCell
{
    public:
        char id;

        MapCell();
        virtual ~MapCell();

        bool isBlocked();
};

#endif // MAPCELL_H