#include <iostream>
#include "Database.h"

using namespace std;

int main()
{
    // instance is constructed here
    Database::getInstance()->runQuery("1st query");
    // a single instance is reused from here on.
    Database::getInstance()->runQuery("2nd query");
    Database::getInstance()->runQuery("3rd query");
}