#define SDL_MAIN_HANDLED
#include <SDL2/SDL.h>
#include <iostream>
using namespace std;

int main() {
    if (SDL_Init(SDL_INIT_VIDEO)) {
        cout << "SDL Init failed" << endl;
        return 1;
    }
    cout << "SDL Init succeeded" << endl;

    SDL_Quit();

    return 0;
}