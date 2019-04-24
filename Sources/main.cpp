#include <iostream>
#include "../Headers/include/Player.h"
#include "../Headers/include/MapCell.h"
#include "../Headers/include/GameMap.h"

using namespace std;

int main(){
    Player hero;
    GameMap map;
    bool isGameOver = false;

    cout << "Inicia el juego" << endl;

    while (!isGameOver) {
        hero.callInput();

        // Actualizado de información de heroe a mapa.
        if(!map.setPlayerCell(hero.x, hero.y)) 
        {
            hero.resetToSafePosition();
        }

        map.draw();

    }

    return 0;
}