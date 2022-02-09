#pragma once
#include <iostream>
#include "component.h"
#include <vector>

using namespace std;

// Button component. Has the default component functionality
class Button : public Component
{
public:
    Button(int x, int y, int width, int height) : Component(x, y, width, height) {}
};
