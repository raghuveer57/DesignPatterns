#include <iostream>
#include "treefactory.h"
#include "tree.h"
#include <vector>
#include <algorithm>
using namespace std;

// Client class which uses both Context(tree) objects
// and Flyweights (treetype) objects
class Forest
{
private:
    vector<Tree> trees;
    TreeFactory factory;

public:
    ~Forest()
    {
        trees.clear();
    }
    void plantTree(int x, int y, string name)
    {
        trees.push_back(Tree(x, y, factory.getTreeType(name)));
    }

    void draw()
    {
        for_each(trees.begin(), trees.end(), [](Tree &tree) { tree.draw();});
    }
};

int main()
{
    Forest forest;
    forest.plantTree(0,0,"banyan");
    forest.plantTree(1,1,"banyan");
    forest.plantTree(2,2,"neem");
    forest.draw();
    return 0;
}