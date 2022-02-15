#pragma once
#include <iostream>
#include "command.h"
#include <stack>

using namespace std;
class Command;
// Concrete copy command class
class CommandHistory
{
private:
    stack<Command*> commandHistory;
public:
    CommandHistory() {}
    void push(Command* command)
    {
        commandHistory.push(command);
    }
    Command* pop()
    {
        Command* temp = commandHistory.top();
        commandHistory.pop();
        return temp;
    }
    size_t size()
    {
        return commandHistory.size();
    }
};
