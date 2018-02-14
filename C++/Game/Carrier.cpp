#include "Carrier.hh"

UnitField Carrier::getField() const
{
    return (Sky);
}

int Carrier::getCost() const
{
    return (500);
}

int Carrier::getAttackRange() const
{
    return (5);
}

int Carrier::getAttackMinRange() const
{
    return (1);
}

int Carrier::getAttackArea() const
{
    return (4);
}

Stats const& Carrier::getBaseStats()
{
    static Stats stats {450, 30, 6, 3};
    return (stats);
}

void Carrier::resetStats()
{
    static Stats stats {0 , 0, 0, 0};

    stats = getBaseStats();
    setHp(stats._hp);
    setPp(stats._pp);
    setAp(stats._ap);
    setMp(stats._mp);
}

void Carrier::resetActions()
{
    static Stats stats {0 , 0, 0, 0};

    stats = getBaseStats();
    setAp(stats._ap);
    setMp(stats._mp);
}