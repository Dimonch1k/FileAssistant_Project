#pragma once
#include <iostream>
#include <stack>
using namespace std;

#include "Cases.h"
class Assistant
{
private:
	stack<string> directoryHistory;

public:
    int makeChoice();
    void makeOption(int choice, string currentDir);
};

