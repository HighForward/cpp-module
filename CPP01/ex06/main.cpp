#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
    Weapon *knife = new Weapon();
    HumanA denis("Denis", knife);

    knife->setType("Huntman");
    denis.attack();
    knife->setType("Karambit");
    denis.attack();

    HumanB daniel("Daniel");
    Weapon *rifle = new Weapon("AK47");

    daniel.setWeapon(rifle);
    daniel.attack();
    rifle->setType("M4A1");
    daniel.attack();
}