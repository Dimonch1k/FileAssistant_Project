#include "Assistant.h"


int Assistant::makeChoice()
{
    int choice;
    cout << "\tEnter your choice: ";
    cin >> choice;
    cout << "\n\n";
    return choice;
}


void Assistant::makeOption(int choice, string currentDir)
{
    switch (choice)
    {
        case 1:
            Case1(currentDir);
            break;
        
        case 2:
            Case2(currentDir);
            break;
        

        case 3:  
            Case3(currentDir);
            break;
        
        case 4:  
            Case4(currentDir);
            break;
        
        case 5:
            Case5(directoryHistory, currentDir);
            break;
        
        case 6:
            Case6(currentDir);
            break;
        
        case 7:
            clearConsole();
            break;
        
        case 0:
            Exit();
            exit(0);
        

        default:
            cerr << "\tInvalid choice. Please try again.\n\n\n";  
    }
}