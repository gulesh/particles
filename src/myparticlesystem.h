#ifndef MyParticleSystem_H_
#define MyParticleSystem_H_

#include "particlesystem.h"

namespace agl
{

   class MyParticleSystem : public ParticleSystem
   {
   public:
      virtual void createParticles(int size) override;
      virtual void update(float dt) override;

      void setClickPos(glm::vec3 pos) {clickPosition = pos; }

   private:
      glm::vec3 clickPosition = glm::vec3(0);
   };

}
#endif