#pragma once
#include <iostream>
#include <filesystem>

#include "DirList.h"

using namespace std;
namespace fs = filesystem;


inline void Case1(string& currentDir)
{
    directoryList(currentDir);
}

inline void Case2(string& currentDir)
{
    string newDir;
    getline(cin, newDir);
    cout << "Enter the directory to change to: ";
    getline(cin, newDir);

    if (fs::is_directory(newDir))
    {
        currentDir = fs::absolute(newDir).string();
    }
    else {
        cout << "Directory not found: " << newDir << '\n';
    }
}

inline void Case3(string& currentDir)
{
    string newDir;
    cout << "\tEnter the name of the directory to create: ";
    getline(cin, newDir);
    fs::create_directory(currentDir + "/" + newDir);
}

inline void Case4(string& currentDir)
{
    string target;
    cout << "\tEnter the name of the file or directory to delete: ";
    getline(cin, target);
    fs::remove_all(currentDir + "/" + target);
}

inline void Case5(stack<string>& directoryHistory, string& currentDir)
{
    if (!directoryHistory.empty())
    {
        currentDir = directoryHistory.top();
        directoryHistory.pop();
    }
    else {
        std::cerr << "No previous directory to go back to.\n";
    }
}

inline void Case6(string& currentDir)
{
    string dir = "C:\\";
    currentDir = fs::absolute(dir).string();
}

inline void clearConsole()
{
    system("cls");
}


inline void Exit()
{
    cout << "\tYou exit the file manager.\n";
}