#include <iostream>

using namespace std;

/* 
    @description: Draw the map with the player's current position in the screen.
    @param playerPosX: Current player's position on x axis.
    @param playerPosY: Current player's position on y axis.
 */
void DrawMap(int playerPosX, int playerPosY) {
    cout << endl;
    
    for (int j=0; j<=6; j++) {
        for (int i=0; i<=6; i++){
            // Add the map's edges and the left/right border.
            if (i==0 || i==6) {
                if (j==0 || j==6) cout << "*";
                else cout << "|";
            } 
            // Add the top/bottom border.
            else if (j==0 || j==6) cout << "-";
            else {
                // Draw the rest of the map.
                if (i == playerPosX and j == playerPosY) cout << "P";
                else cout << ".";
            }
        }
        cout << endl;
    }

    cout << endl << endl;
}

int main(){
    int playerPosX = 1;
    int playerPosY = 1;
    char input = ' ';
    bool gameOver = false;

    cout << "Bienvenido jugador" << endl;

    while (!gameOver) {
        cout << "¿Qué quieres hacer?";
        cout << "Moverte a la izquierda (a), moverte a la derecha (d), moverte arriba (w) y moverte abajo (s): ";
        cin >> input;

        if (input == 'd' and playerPosX < 5) playerPosX += 1;
        else if (input == 'a' and playerPosX > 1) playerPosX -= 1;
        else if (input == 'w' and playerPosY > 1) playerPosY -= 1;
        else if (input == 's' and playerPosY < 5) playerPosY += 1;
        else if (input == 'p') gameOver = true;

        DrawMap(playerPosX, playerPosY);
        cout << endl;
    } 
}