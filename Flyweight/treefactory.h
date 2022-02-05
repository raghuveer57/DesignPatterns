#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include "treetype.h"
using namespace std;

// Factory class for producing different types of fly weights.
class TreeFactory
{
private:
    vector<TreeType> treeList;

public:
    ~TreeFactory()
    {
        treeList.clear();
    }
    TreeType getTreeType(string name)
    {
        TreeType *type;
        int found_index = -1;
        // any_of(treeList.begin(), treeList.end(), [&](TreeType findType)
        //        {
        //            if (findType.find(name))
        //            {
        //                findType.draw(-1,-1);
        //                type = &findType;
        //                return true;
        //            }
        //            return false;
        //        });

        for (int i = 0; i < treeList.size(); i++)
        {
            if (treeList[i].find(name))
            {
                found_index = i;
                break;
            }
        }
        if (found_index < 0)
        {
            type = new TreeType(name, name, name);
            treeList.push_back(*type);
            cout << "Creating " << name << " tree" << endl;
            return *type;
        }
        return treeList[found_index];
        
    }
};
