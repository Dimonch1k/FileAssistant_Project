
//                                                                                                                       _______
//          _____  ____    ||        ____              ___         ___             ___                        ___       /_____  |     ___     ____
//         ||       ||     ||       ||                // \\       // \\           // \\        ||\\   ||     // \\     //    |  |   ||       ||   \\
//         ||____   ||     ||       ||___            //   \\     //   \\         //___\\       || \\  ||    //___\\    ||   ____    ||___    ||___//
//         ||       ||     ||       ||              //     \\   //     \\       //     \\      ||  \\ ||   //     \\    \\  --- |   ||       ||   \\
//         ||      ----    ||____   ||___          //       \\_//       \\     //       \\     ||   \\||  //       \\    \\____||   ||___    ||    \\


#include <iostream>
#include <stack>

#include "DirList.h"
#include "Cases.h"
#include "Optiones.h"
#include "Assistant.h"

using namespace std;

#include <filesystem>
namespace fs = filesystem;








int main() {
    Assistant assistant;

    string currentDir = filesystem::current_path().string();

    while (true) {
        printOptiones(currentDir);

        int choice = assistant.makeChoice();
        
        assistant.makeOption(choice, currentDir);
    }
    return 0;
}