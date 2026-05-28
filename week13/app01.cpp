
#include "pokemon.h"
#include "pikachu.h"
#include "pokemon.h"  // duplicated code


int main()
{
    //Pikachu Pikachu;   // default
    //cout << Pikachu.getHp() << endl;
    //cout << Pikachu.getElectricAttack();

    Pikachu pikachu(500, 4000);  // parameter
    cout << pikachu.getHp() << endl;
    cout << pikachu.getElectricAttack() << endl;

    Pikachu pikachu2(pikachu);  // copy
    cout << pikachu2.getHp() << endl;
    cout << pikachu2.getElectricAttack() << endl;

    return 0;
}