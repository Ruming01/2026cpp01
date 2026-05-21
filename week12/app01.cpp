
#include <iostream>
#include <string>
using namespace std;

class Pokemon   
{
private:
    int hp;
public:
    void set(int hp) {
        this->hp = hp;
    };
    int getHp() const {
        return hp;
    };
};

class Pikachu : public Pokemon // is a 관계로 Pokemon 클래스를 상속받는 Pikachu 클래스
{
private:
    int electricAttack;
public:
    void set(int hp)
    {
        Pokemon::set(hp);  // Delegation
    };
    void set(int hp,int electricAttack)
    {
        Pokemon::set(hp);  // Delegation
        this->electricAttack = electricAttack;
    };
    int getElectricAttack() const
    {
        return electricAttack;
    };
};

int main()
{
    // Pokemon 객체 인스턴스화하고 사용
    Pokemon Pokemon;
    Pokemon.set(100);
    cout << Pokemon.getHp();
    cout << endl << endl;

    // Pikachu 클래스 인스턴스화하고 사용
    Pikachu Pikachu;
    Pikachu.set(150);
    cout << Pikachu.getHp() << endl;
    Pikachu.set(200, 1000);
    cout << Pikachu.getHp() << endl;
    cout << Pikachu.getElectricAttack();
    return 0;
}