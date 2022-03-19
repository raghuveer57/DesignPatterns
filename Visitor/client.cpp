#include <iostream>
#include "visitor.h"
using namespace std;

int main()
{
  XMLExportVisitor* xmlvisitor = new XMLExportVisitor();
  HTMLExportVisitor* htmlvisitor = new HTMLExportVisitor();
  Dot* dot = new Dot();
  Circle* circle = new Circle();
  Rectangle* rectangle = new Rectangle();
  dot->accept(xmlvisitor);
  dot->accept(htmlvisitor);
  circle->accept(xmlvisitor);
  circle->accept(htmlvisitor);
  rectangle->accept(xmlvisitor);
  rectangle->accept(htmlvisitor);
  return 0;
}