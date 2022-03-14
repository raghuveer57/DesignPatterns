#pragma once
#include "strategies.h"

class Context
{
private:
   // maintains reference to the strategy
   //open closed - composition
   Strategy *mStrategy;

public:
   //default strategy is addition
   Context() : mStrategy(new AdditionStrategy()) {}
   // method to set the strategies 
   void setStrategy(Strategy* strategy)
   {
      delete mStrategy;
      mStrategy = nullptr;
      mStrategy = strategy;
   }
   // delegate the execution to the concrete strategy alogirithm
   int executeStrategy(int a, int b)
   {
      return mStrategy->execute(a,b);
   }
};