#include <iostream>

using namespace std;

int main () {
    char input;

    cout << "*............................*" << endl;
    cout << "*         THE BLACK CAT      *" << endl;
    cout << "*    AND THE HOLLOW TOWN     *" << endl;
    cout << "*............................*" << endl << endl;

    cout << "Oh no! This was my first words." << endl;
    cout << "You wake up with a strong headache, when you look around you realize " << endl;
    cout << "that nothing is familiar to you. You are in a dirty unknown room, the only" << endl;
    cout << "things you can notice is a Windows (W), a Toilet (T), a rubber duck (R)" << endl;
    cout << "and a door." << endl << endl;

    cout << "Which one do you decide to go first? (W,T,R,D): ";
    cin >> input;

    input = toupper(input);

    switch (input) {
        case 'W':
            cout << "> You decided to go to the Windows (W)" << endl;
            break;
        case 'T':
            cout << "> You decided to go to the Toilet (T)" << endl;
            break;
        case 'R':
            cout << "> You decided to go for rubber duck (R)" << endl;
            cout << "When you go there, you take it and it start to tell you secrets that " << endl;
            cout << "you have no told. You try to throw it away byt for some reason it " << endl;
            cout << "always comes back to your hand, this destroy your health and you end up " << endl;
            cout << "going crazy." << endl;
            break;
        case 'D':
            cout << "> You decided to go to the door (D)" << endl;
            break;
    }

    cout << endl;
    cout << "*............................*" << endl;
    cout << "*         GAME OVER          *" << endl;
    cout << "*............................*" << endl << endl;

    cout << "END OF THE PROGRAM." << endl;

    return 0;
}