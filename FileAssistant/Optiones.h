#pragma once
#include <iostream>
using namespace std;

void printOptiones(string currentDir)
{
    cout << "\n\n\tCurrent directory: " << currentDir << "\n\n";
    cout << "\tOPTIONES:\n";
    cout << "\t1. List files and directories.\n";
    cout << "\t2. Change directory.\n";
    cout << "\t3. Create a directory.\n";
    cout << "\t4. Delete a file or directory.\n";
    cout << "\t5. Returns to preview directory.\n";
    cout << "\t6. Returns to the start\n";
    cout << "\t7. Clear console\n";
    cout << "\t0. Exit\n\n\n";
}