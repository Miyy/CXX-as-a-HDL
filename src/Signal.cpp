#include "Signal.h"

Signal::Signal()
{
    name  = "";
    value = new bool(false);
}

Signal::Signal(std::string name, bool value)
{
    this->name  = name;
    this->value = new bool(value);
}

Signal::Signal(std::string name, Signal& value)
{
    this->name  = name;
    this->value = (bool*)value;
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

std::string Signal::getName() const
{
    return name;
}
