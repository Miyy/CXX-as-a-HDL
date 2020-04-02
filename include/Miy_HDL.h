#ifndef MIY_HDL
#define MIY_HDL

#include <map>
#include <string>

class Signal
{
public:
    Signal();
    Signal(bool value);

    operator bool() const;
    operator bool*() const;
    Signal& operator=(bool value);
    Signal& operator=(Signal& signal);

private:
    bool *value;
};



class Module
{
public:
    virtual void run() = 0;
    void         test();

protected:
    std::map<std::string, Signal> inputs;
    std::map<std::string, Signal> outputs;


    bool NOT (bool a);
    bool AND (bool a, bool b);
    bool OR  (bool a, bool b);
    bool NAND(bool a, bool b);
    bool NOR (bool a, bool b);
    bool XOR (bool a, bool b);
};



class Net
{
public:
    operator Signal&();

private:
    Signal value;
};

#endif
