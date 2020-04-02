#include "Signal.h"

Signal::Signal()
{
    value = new bool(false);
}



Signal::Signal(bool value)
{
    this->value = new bool(value);
}



Signal::operator bool() const
{
    return *value;
}



Signal::operator bool*() const
{
    return value;
}



Signal& Signal::operator=(bool value)
{
    *(this->value) = value;

    return *this;
}



Signal& Signal::operator=(Signal& signal)
{
    *(this->value) = (bool)signal;

    return *this;
}
