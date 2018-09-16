#define SDL_MAIN_HANDLED  // Fix something... :/
#include <SDL2/SDL.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "Particle.h"
#include "Screen.h"
#include "Swarm.h"
using namespace std;
using namespace ejh;

int main() {
    srand(time(NULL));  //Seeing RNG

    Screen screen;

    if (screen.init() == false) {
        cout << "Error initializing SDL" << endl;
    }

    Swarm swarm;

    while (true) {
        // Update particles
        // Draw particles
        int elapsed = SDL_GetTicks();
        screen.clear();
        swarm.update();

        unsigned char red = (1 + cos(elapsed * 0.0005)) * 128;
        unsigned char green = (1 + cos(elapsed * 0.001)) * 128;
        unsigned char blue = (1 + cos(elapsed * 0.0015)) * 128;

        const Particle* const pParticles = swarm.getParticles();

        for (int i = 0; i < Swarm::NPARTICLES; i++) {
            Particle particle = pParticles[i];

            int x = (particle.m_x + 1) * Screen::SCREEN_WIDTH / 2;
            int y = (particle.m_y + 1) * Screen::SCREEN_HEIGHT / 2;

            screen.setPixel(x, y, red, green, blue);
        }

        // Draw the screen
        screen.update();

        // Check for messages/events
        if (screen.processEvents() == false) {
            break;
        }
    };

    screen.close();

    return 0;
}