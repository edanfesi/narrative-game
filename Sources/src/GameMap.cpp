#include "../../Headers/include/GameMap.h"
#include <iostream>
#include <fstream>

using namespace std;

GameMap::GameMap(){
    playerCell = NULL;
    loadMapFromFile();
}

GameMap::~GameMap(){

}

// Draw the current map state.
void GameMap::draw(){
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 10; j++) {
            //cout << "Cell position x: " << i << ", cell position y: " << j << ", value: " << cells[i][j].id << endl;
            cout << cells[i][j].id;
        }

        cout << endl;
    }

    std::cout << std::endl;
}

/**
    Set the player's position as the cell position on the map.

    @param player's position in the x-axis.
    @param player's position in the y-axis.
*/
bool GameMap::setPlayerCell(int playerX, int playerY){
    cout << " The Cell Is Blocked: " << cells[playerX][playerY].isBlocked() << endl << endl;
    if (!cells[playerY][playerX].isBlocked())
    {    
        // We have to clean the current cell of the player if it's loaded
        // in the map and we want to update the current position.
        if (playerCell != NULL) {
            playerCell->id = ' ';
        }
        
        playerCell = &cells[playerY][playerX];
        playerCell->id = 'H'; // The 'H' is the player's avatar.
        return true;
    }
    else
    {
        return false;
    }
}

// Draw a map in the prompt using a file that contains numbers.
void GameMap::loadMapFromFile()
{
    int row = 0;
    string line;
    ifstream myFile("Map.txt");

    if (myFile.is_open()) 
    {
        while( getline(myFile, line) ) 
        {
            for (int i = 0; i < line.length(); i++) {
                // If the current char is a 0, we know it is a valid space to move the player.
                if (line[i] == '0') 
                    cells[row][i].id = ' ';

                // If the char is a 1, we have to put a wall.
                else if (line[i] == '1') 
                    cells[row][i].id = '.';

                else 
                    cells[row][i].id = line[i];
            }

            row++;
        }
        cout << "Rows: " << row << endl;
    } 
    else 
    {
        cout << "FATAL ERROR: MAP FILE COULD NOT BE LOADED! TRY AGAIN." << endl;
    }
}