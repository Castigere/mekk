#ifndef PARTICLE_H_
#define PARTICLE_H_

namespace ejh {

struct Particle {
    double m_x;
    double m_y;

   private:
    double m_speed;
    double m_direction;

   private:
    void init();

   public:
    Particle();
    ~Particle();

    void update(int interval);
};
}  // namespace ejh

#endif  // PARTICLE_H_