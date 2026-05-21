
#include <iostream>
#include <string>
using namespace std;

class Pokemon   
{
private:
    int hp;
public:
    Pokemon() : hp(1) {

    }
	Pokemon(int hp) : hp(hp) {
        
    }
    Pokemon(const Pokemon& pokemon) : hp(pokemon.hp) {

    }
    void set(int hp) {
        this->hp = hp;
    }
    int getHp() const {
        return hp;
    }
};

class Pikachu : public Pokemon // is a 관계로 Pokemon 클래스를 상속받는 Pikachu 클래스
{
private:
    int electricAttack;
public:
    Pikachu() : Pokemon(), electricAttack(10) { //invocation
    }
	Pikachu(int hp, int electricAttack) : Pokemon(hp), electricAttack(electricAttack) {
    }
    Pikachu(const Pikachu& pikachu) : Pokemon(pikachu), electricAttack(pikachu.electricAttack) {
    }
    void set(int hp)
    {
        Pokemon::set(hp);  // Delegation
    }
    void set(int hp,int electricAttack)
    {
        Pokemon::set(hp);  // Delegation
        this->electricAttack = electricAttack;
    }
    int getElectricAttack() const
    {
        return electricAttack;
    }
};

int main()
{
    //Pikachu pikachu; // 기본 생성자
    //cout << pikachu.getHp() << endl;
    //cout << pikachu.getElectricAttack() << endl;

    Pikachu pikachu(500, 4000); // 매개변수 생성자
    cout << pikachu.getHp() << endl;
    cout << pikachu.getElectricAttack() << endl;

    Pikachu pikachu2(pikachu); //복사 생성자
    cout << pikachu2.getHp() << endl;
    cout << pikachu2.getElectricAttack() << endl;

    return 0;
}