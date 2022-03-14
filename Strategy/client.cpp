#include <iostream>
#include "context.h"
using namespace std;

int main()
{
  Context* context = new Context();
  cout << context->executeStrategy(10,5) << endl;
  context->setStrategy(new SubstractStrategy());
  cout << context->executeStrategy(10,5) << endl;
  context->setStrategy(new MultiplyStrategy());
  cout << context->executeStrategy(10,5) << endl;

}