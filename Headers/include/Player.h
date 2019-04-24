#ifndef PLAYER_H
#define PLAYER_H

class Player
{   
    public:
        int x, y, lastX, lastY; 

        Player();
        //virtual ~Player();
        void callInput();
        void resetToSafePosition();

};

#endif // PLAYER_H