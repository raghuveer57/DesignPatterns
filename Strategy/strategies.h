#pragma once

// streategy interface
class Strategy
{
public:
    virtual int execute(int a, int b) = 0;
    virtual ~Strategy() {}
};

//concrete strategies ( alogirthms)
class AdditionStrategy : public Strategy
{
    int execute(int a, int b)
    {
        return (a + b);
    }
};

class SubstractStrategy : public Strategy
{
    int execute(int a, int b)
    {
        return (a - b);
    }
};

class MultiplyStrategy : public Strategy
{
    int execute(int a, int b)
    {
        return (a * b);
    }
};