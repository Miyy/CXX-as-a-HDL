#include "Adder.h"

#include <iostream>

Adder::Adder()
{
    nInputs  = 2;
    nOutputs = 2;

    inputs = new Input*[2];
    inputs[0] = &a;
    inputs[1] = &b;

    outputs = new Output*[2];
    outputs[0] = &sum;
    outputs[1] = &carry;
}

void Adder::run()
{
    sum   = XOR(a, b);
    carry = AND(a, b);
}
