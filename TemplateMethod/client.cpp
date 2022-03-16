#include <iostream>
#include "templatemethod.h"
using namespace std;

int main()
{
  GameAI* monster = new MonstersAI();
  monster->makeTurn();
  GameAI* hero = new HeroesAI();
  hero->makeTurn();
  delete monster;
  delete hero;
}