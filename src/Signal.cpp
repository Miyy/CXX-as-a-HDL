#include "Signal.h"

Signal::Signal()
{
    value = false;
}



Signal::operator bool() const
{
    return this->value;
}



Signal& Signal::operator=(bool val)
{
    this->value = val;

    return *this;
}



Input& Input::operator=(bool val)
{
    this->value = val;

    return *this;
}



Output& Output::operator=(bool val)
{
    this->value = val;

    return *this;
}
