#include "FightingGame.h"

FightingGame::FightingGame(std::string name, int attackHitPoint, int attackKickPoint) {
    this->name = name;
    this->attackHitPoint = attackHitPoint;
    this->attackKickPoint = attackKickPoint;
}

std::string FightingGame::getName() {
    return this->name;
}

int FightingGame::getLifePoint() {
    return this->lifePoint;
}

void FightingGame::setLifePoint(int newLifePoint) {
    this->lifePoint = newLifePoint;
}

int FightingGame::getAttackHitPoint() {
    return this->attackHitPoint;
}

int FightingGame::getAttackKickPoint() {
    return this->attackKickPoint;
}

void FightingGame::infoLifePointLawan(FightingGame character) {
    std::cout << "Nyawa " << character.getName() << " sekarang " << character.getLifePoint() << "\n\n";
}

bool FightingGame::lawanKO(FightingGame* character) {
    if (character->getLifePoint() <= 0) {
        character->setLifePoint(0);
        return true;
    }
    return false;
}

bool FightingGame::sayaKO() {
    if (this->getLifePoint() <= 0) {
        this->setLifePoint(0);
        return true;
    }
    return false;
}

void FightingGame::hit(FightingGame* character) {
    if (this->lawanKO(character) || this->sayaKO()) {
        std::cout << "Nyawa " << character->getName() << " sudah mencapai 0\n";
    }
    else {
        int nyawaFinal = character->getLifePoint() - this->attackHitPoint;
        character->setLifePoint(nyawaFinal);
        std::cout << "Nyawa " << character->getName() << " berkurang sebesar " << this->attackHitPoint << "\n";
    }
}

void FightingGame::kick(FightingGame* character) {
    if (this->lawanKO(character) || this->sayaKO()) {
        std::cout << "Nyawa " << character->getName() << " sudah mencapai 0\n";
    }
    else {
        int nyawaFinal = character->getLifePoint() - this->attackKickPoint;
        character->setLifePoint(nyawaFinal);
        std::cout << "Nyawa " << character->getName() << " berkurang sebesar " << this->attackKickPoint << "\n";
    }
}
