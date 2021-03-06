#define SDL_MAIN_HANDLED  // Fix something... :/
#include <SDL2/SDL.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    const int SCREEN_WIDTH = 800;
    const int SCREEN_HEIGHT = 600;
    if (SDL_Init(SDL_INIT_VIDEO)) {
        cout << "SDL Init failed" << endl;
        return 1;
    }
    SDL_Window *window = SDL_CreateWindow(
        "Particle Fire Explotion",
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        SCREEN_WIDTH,
        SCREEN_HEIGHT,
        SDL_WINDOW_SHOWN);

    if (window == NULL) {
        printf("Could not create window: %s/n", SDL_GetError());
        SDL_Quit();
        return 2;
    }

    SDL_Renderer *renderer = SDL_CreateRenderer(
        window,
        -1,
        SDL_RENDERER_PRESENTVSYNC);

    SDL_Texture *texture = SDL_CreateTexture(
        renderer,
        SDL_PIXELFORMAT_RGBA8888,
        SDL_TEXTUREACCESS_STATIC,
        SCREEN_WIDTH,
        SCREEN_HEIGHT);

    if (renderer == NULL) {
        printf("Could not create renderer: %s/n", SDL_GetError());
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 3;
    }

    if (texture == NULL) {
        printf("Could not create texture: %s/n", SDL_GetError());
        SDL_DestroyRenderer(renderer);
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 4;
    }

    Uint32 *buffer = new Uint32[SCREEN_WIDTH * SCREEN_HEIGHT];

    memset(buffer, 0, SCREEN_WIDTH * SCREEN_HEIGHT * sizeof(Uint32));

    buffer[30000] = 0xFFFFFFFF;

    for (int i = 0; i < SCREEN_WIDTH * SCREEN_HEIGHT; i++) {
        buffer[i] = 0xFFFF00FF;
    };

    SDL_UpdateTexture(
        texture,
        NULL,
        buffer,
        SCREEN_WIDTH * sizeof(Uint32));

    SDL_RenderClear(renderer);
    SDL_RenderCopy(renderer, texture, NULL, NULL);
    SDL_RenderPresent(renderer);

    bool quit = false;
    SDL_Event event;
    while (!quit) {
        // Update particles
        // Draw particles
        // Check for messages/events
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                quit = true;
            };
        };
    };
    delete[] buffer;
    SDL_DestroyTexture(texture);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    printf("Quitting!");
    SDL_Quit();

    return 0;
}