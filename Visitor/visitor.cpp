#include "visitor.h"
#include <iostream>

void XMLExportVisitor::visit(Dot* dot)
{
    std::cout << "Exporting dot into XML" << std::endl;
}

void XMLExportVisitor::visit(Circle* circle)
{
    std::cout << "Exporting circle into XML" << std::endl;
}

void XMLExportVisitor::visit(Rectangle* rectangle)
{
    std::cout << "Exporting rectangle into XML" << std::endl;
}

void XMLExportVisitor::visit(ComplexShape* complexShape)
{
    std::cout << "Exporting complex into XML" << std::endl;
}

void HTMLExportVisitor::visit(Dot* dot)
{
    std::cout << "Exporting dot into HTML" << std::endl;
}

void HTMLExportVisitor::visit(Circle* circle)
{
    std::cout << "Exporting circle into HTML" << std::endl;
}

void HTMLExportVisitor::visit(Rectangle* rectangle)
{
    std::cout << "Exporting rectangle into HTML" << std::endl;
}

void HTMLExportVisitor::visit(ComplexShape* complexShape)
{
    std::cout << "Exporting complex into HTML" << std::endl;
}