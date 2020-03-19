#include <math.h>
#include <iostream>

#include "Circuit.h"

Circuit::Circuit()
{
    nInputs  = 0;
    nOutputs = 0;

    inputs  = 0;
    outputs = 0;
}



void Circuit::test()
{
    if (nInputs <= 64) {
        for (unsigned long long i = 0; i < pow(2, nInputs); i++) {
            unsigned long long mod = 1;

            for (int j = 0; j < nInputs; j++) {
                *(inputs[j]) = (bool)((i & mod) / mod);
                std::cout << ((i & mod) / mod) << " ";
                mod *= 2;
            }

            run();

            std::cout << "\t";

            for (int k = 0; k < nOutputs; k++) {
                std:: cout << outputs[k]->value << " ";
            }

            std::cout << '\n';
        }
    }
    else {
        std::cout << "Too many inputs.\n";
    }
}



bool Circuit::NOT(bool a)
{
    return (!a);
}



bool Circuit::AND(bool a, bool b)
{
    return (a && b);
}



bool Circuit::OR(bool a, bool b)
{
    return (a || b);
}



bool Circuit::NAND(bool a, bool b)
{
    return NOT(AND(a, b));
}



bool Circuit::NOR(bool a, bool b)
{
    return NOT(OR(a, b));
}



bool Circuit::XOR(bool a, bool b)
{
    return (a != b);
}
