#include <iostream>
#include "../../Headers/include/Player.h"

using namespace std;

Player::Player()
{
    // Set the player initial position
    x = 1;
    y = 1;

    // Set the last position as the initial position
    lastX = x;
    lastY = y;
}

/*Player::~Player()
{

}*/

void Player::callInput() {
    char userInput = ' ';
    cin >> userInput;

    // Save the last position
    lastX = x;
    lastY = y;
 
    switch (userInput)
    {
        case 'w':
        case 'W':
            y -= 1;
            break;
        case 's':
        case 'S':
            y += 1;
            break;
        case 'a':
        case 'A':
            x -= 1;
            break;
        case 'd':
        case 'D':
            x += 1;
            break;
    }

    cout << "***************************" << endl;
    cout << "+ After input" << endl;
    cout << "  Last position (" << lastX << "," << lastY << ")" << endl;
    cout << "  New position (" << x << "," << y << ")" << endl;
}

void Player::resetToSafePosition(){
    //cout << "+ Last move (" << lastX << "," << lastY << ") y New Move (" << x << "," << y << ")\n";
    x = lastX;
    y = lastY;
}