#ifndef SWARM_H_
#define SWARM_H_

#include "Particle.h"

namespace ejh {

class Swarm {
   public:
    const static int NPARTICLES = 5000;

   private:
    Particle * const m_pParticles;
    int lastTime;

   public:
    Swarm();
    ~Swarm();
    void update(int elapsed);
    const Particle * const getParticles();
};
}  // namespace ejh

#endif  // SWARM_H_