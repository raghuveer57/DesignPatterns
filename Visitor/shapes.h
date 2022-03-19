#pragma once
#include <string>
#include "visitor.h"
using namespace std;

class Visitor;
class Shape
{
public:
   // method to accept vistor
   virtual void accept(Visitor *vistor) = 0;
};

class Dot : public Shape
{
public:
   void accept(Visitor *vistor);
};

class Circle : public Shape
{
public:
   void accept(Visitor *vistor);
};

class Rectangle : public Shape
{
public:
   void accept(Visitor *vistor);
};

class ComplexShape : public Shape
{
public:
   void accept(Visitor *vistor);
};