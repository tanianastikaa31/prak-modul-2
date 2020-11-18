#include <iostream>
#include "FightingGame.h"

using namespace std;

int main() {
    FightingGame* raiden = new FightingGame("Raiden", 10, 20);
    FightingGame* sub_zero = new FightingGame("Sub-Zero", 5, 25);
    cout << "======== GAME FIGHT ========\n\n";

    raiden->kick(sub_zero);
    sub_zero->kick(raiden);

    for (int i = 0; i < 3; i++) {
        sub_zero->hit(raiden);
    }
    for (int i = 0; i < 4; i++) {
        raiden->kick(sub_zero);
    }

    cout << "\n======== K.O ========\n\n";

    cout << "=============";
    cout << "\nHasil Akhir\n"
         << raiden->getName() << " : " << raiden->getLifePoint() << "\n"
         << sub_zero->getName() << " : " << sub_zero->getLifePoint() << "\n\n";

    system("pause");
    return 0;
}