#include "Module.h"

void Module::test()
{
    //test realization
}



bool Module::NOT(bool a)
{
    return !a;
}



bool Module::AND(bool a, bool b)
{
    return (a && b);
}



bool Module::OR(bool a, bool b)
{
    return (a || b);
}



bool Module::NAND(bool a, bool b)
{
    return NOT(AND(a, b));
}



bool Module::NOR(bool a, bool b)
{
    return NOT(OR(a, b));
}



bool Module::XOR(bool a, bool b)
{
    return (a != b);
}
