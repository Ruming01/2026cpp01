#include "squirtle.h"

Squirtle::Squirtle() : Pokemon(), waterAttack(10) {  // Invocation

}
Squirtle::Squirtle(int hp, int waterAttack) : Pokemon(hp), waterAttack(waterAttack) {// Invocation

}
Squirtle::Squirtle(const Squirtle& squirtle) : Pokemon(squirtle), waterAttack(squirtle.waterAttack) {// Invocation

}
void Squirtle::set(int hp) {
    Pokemon::set(hp);  // Delegation
}
void Squirtle::set(int hp, int waterAttack) {
    Pokemon::set(hp);  // Delegation
    this->waterAttack = waterAttack;
}
int Squirtle::getWaterAttack() const {
    return waterAttack;
}
