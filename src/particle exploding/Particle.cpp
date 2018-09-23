#include "Particle.h"
#include <SDL2/SDL.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>
#include "Screen.h"
using namespace std;

namespace ejh {

Particle::Particle() : m_x(0),
                       m_y(0) {
    init();
}

void Particle::init() {
    m_x = 0;
    m_y = 0;
    m_direction = (2 * M_PI * rand()) / RAND_MAX;
    m_speed = (0.04 * rand()) / RAND_MAX;
    m_speed *= m_speed;  // squared
}

Particle::~Particle() {
}

void Particle::update(int interval) {
    // my implementation of infinity
    if (m_x < -1 || m_x > 1 || m_y < -1 || m_y > 1) {
        // init();
    }
    m_direction += interval * 0.0002;

    double xspeed = m_speed * cos(m_direction);
    double yspeed = m_speed * sin(m_direction);

    m_x += xspeed * interval;
    m_y += yspeed * interval;
}

}  // namespace ejh