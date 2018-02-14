#include "Tank.hh"

UnitField Tank::getField() const
{
    return (Ground);
}

int Tank::getCost() const
{
    return (300);
}

int Tank::getAttackRange() const
{
    return (5);
}

int Tank::getAttackMinRange() const
{
    return (2);
}

int Tank::getAttackArea() const
{
    return (4);
}

Stats const& Tank::getBaseStats()
{
    static Stats stats {450, 30, 6, 3};
    return (stats);
}

void Tank::resetStats()
{
    Stats stats {0 , 0, 0, 0};

    stats = getBaseStats();
    setHp(stats._hp);
    setPp(stats._pp);
    setAp(stats._ap);
    setMp(stats._mp);
}

void Tank::resetActions()
{
    static Stats stats {0 , 0, 0, 0};

    stats = getBaseStats();
    setAp(stats._ap);
    setMp(stats._mp);
}