
#include "pikachu.h"
#include "squirtle.h"


int main()
{
    //Pikachu Pikachu;   // default
    //cout << Pikachu.getHp() << endl;
    //cout << Pikachu.getElectricAttack();

    Squirtle squirtle(1000, 3000);
    cout << squirtle.getWaterAttack() << endl;

    Pikachu pikachu(500, 4000);  // parameter
    cout << pikachu.getHp() << endl;
    cout << pikachu.getElectricAttack() << endl;

    Pikachu pikachu2(pikachu);  // copy
    cout << pikachu2.getHp() << endl;
    cout << pikachu2.getElectricAttack() << endl;

    return 0;
}