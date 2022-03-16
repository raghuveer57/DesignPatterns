#pragma once
#include <iostream>
using namespace std;
// TemplateMethod abstract class
//  consists of template method
//  abstract methods
//  methods with default implementations
class GameAI
{

public:
   // Template method
   // This defines the alogirthm that the template methods follow
   // Will include all the default and non-default methods
   void makeTurn()
   {
      buildResources(); // default is provided and can be overriden
      prepareArmy();    // every sub class should implement this
      attack();         // only the base member call is allowed
      cout << endl;
   }

   // optional method to be overridden
   // default implementation is provided in the base class
   virtual void buildResources()
   {
      cout << "Building default resources" << endl;
   }

   // Method that is mandated to be implemented in the sub class
   virtual void prepareArmy() = 0;

   // method that is default provided and cannot be changed
   virtual void attack() final
   {
      cout << "Attacking the army" << endl;
   }

   virtual ~GameAI() {}
};

class MonstersAI : public GameAI
{
public:
   void prepareArmy()
   {
      cout << "Preparing monsters army" << endl;
   }
};

class HeroesAI : public GameAI
{
public:
   void buildResources()
   {
      cout << "Buidling special hero resources" << endl;
   }
   void prepareArmy()
   {
      cout << "Preparing Hero army" << endl;
   }
};
