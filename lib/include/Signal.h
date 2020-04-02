#ifndef MIY_SIGNAL
#define MIY_SIGNAL

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

#endif
