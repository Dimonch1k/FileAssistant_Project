#pragma once
#include <iostream>
#include <filesystem>
using namespace std;

namespace fs = filesystem;

inline void directoryList(string& path)
{
    for (auto& entry : fs::directory_iterator(path))
    {
        if (fs::is_directory(entry))
        {
            cout << "Directory: " << entry.path().filename() << '\n';
        }

        else if (fs::is_regular_file(entry))
        {
            if (fs::is_empty(entry))
            {
                cout << "File: " << entry.path().filename() << " is empty!\n";
                continue;
            }
            cout << "File: " << entry.path().filename() << '\n';
        }

        else if (fs::is_symlink(entry))
        {
            cout << "Symbolic Link: " << entry.path().filename() << '\n';
        }

        else if (fs::is_block_file(entry))
        {
            cout << "Block Device: " << entry.path().filename() << '\n';
        }

        else if (fs::is_character_file(entry))
        {
            cout << "Character Device: " << entry.path().filename() << '\n';
        }

        else if (fs::is_other(entry))
        {
            cout << "Other!\n";
        }

        else {
            cout << "Unknown: " << entry.path().filename() << '\n';
        }
    }
}