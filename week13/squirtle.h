#pragma once
#include "pokemon.h"

class Squirtle : public Pokemon  // is-a
{
private:
    int waterAttack;
public:
    Squirtle();
    Squirtle(int hp, int waterAttack);
    Squirtle(const Squirtle& Squirtle);
    void set(int hp);
    void set(int hp, int waterAttack);
    int getWaterAttack() const;
};