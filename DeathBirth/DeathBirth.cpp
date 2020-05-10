// MiscProblems.cpp : Defines the entry point for the application.
//

#include "DeathBirth.h"
#include <string>
#include <sstream> 
#include <map>

using namespace std;

/*
Given list of births and deaths, determine years where most people were alive
"Nicolas": (birth: 1900, death: 1975),
"Vladimir": (birth: 1970, death: 2000),
"Julius": (birth: 1950, death: 1985),
"Alexander": (birth: 1900, death: 1920),
"Obama": (birth: 1910, death: 1920),
"George": (birth: 1915, death: 1920),
"Benjamin": (birth:  1919, death: 1925)
*/

void PrintRange(int start, int end)
{
	for (int i = start; i <= end; i++)
	{
		cout << i << " ";
	}
	cout << endl;
}

int main()
{
	stringstream ss;
	string str;
	int num;

	//Read string till we press enter button(twice!!!!)
	while (getline(cin,str))
	{
		if (str.empty())
			break;
		ss << str;
	}

	std::multimap<int, int> years;
	bool isOdd = true;

	// Store birth and death dates(i.e., numbers)
	while (!ss.eof())
	{
		ss >> str;
		if (stringstream(str) >> num)
		{
			if (isOdd)
			{
				years.emplace(num, 1); // store birth as (num , 1)
				isOdd = false;
			}
			else
			{
				years.emplace(num, -1); // store death as (num , -1)
				isOdd = true;
			}
		}
	}

	//Start counting from the births and deaths in the ascending order and store the max count
	int prevCount = 0;
	int maxCount = 0;
	for (auto i = years.begin(); i != years.end(); i++)
	{
		i->second = i->second + prevCount;
		prevCount = i->second;
		if (prevCount > maxCount)
			maxCount = prevCount;
	}

	//Identify the range based on the obtained max count
	auto itr = years.begin();
	while (itr != years.end())
	{
		if (itr->second == maxCount)
		{
			auto start = itr->first;
			auto end = start;
			
			do
			{
				itr++;
				end = itr->first;
			} while ((itr->second == maxCount && itr != years.end()));
			PrintRange(start, end);
		}
		else
		{
			itr++;
		}
	}

	return 0;
}
