#include "Swarm.h"

namespace ejh {

Swarm::Swarm() : m_pParticles(new Particle[NPARTICLES]) {
}

Swarm::~Swarm() {
    delete[] m_pParticles;
}

const Particle* const Swarm::getParticles() {
    return m_pParticles;
}

void Swarm::update() {
    for (int i = 0; i < Swarm::NPARTICLES; i++) {
        m_pParticles[i].update();
    }
}

}  // namespace ejh