#define SDL_MAIN_HANDLED  // Fix something... :/
#include <SDL2/SDL.h>
#include <iostream>
#include "Screen.h"
using namespace std;
using namespace ejh;

int main() {
    Screen screen;

    if (screen.init() == false) {
        cout << "Error initializing SDL" << endl;
    }

    while (true) {
        // Update particles
        // Draw particles
        // Check for messages/events
        if (screen.processEvents() == false) {
            break;
        }
    };

    screen.close();

    return 0;
}