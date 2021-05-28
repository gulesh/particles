// Bryn Mawr College, alinen, 2020
//

#include "AGL.h"
#include "AGLM.h"
#include <cmath>
#include "myparticlesystem.h"

using namespace std;
using namespace agl;
using namespace glm;

void MyParticleSystem::createParticles(int size)
{
   mTexture = theRenderer.loadTexture("../textures/ParticleFireCloud.png");
   // clickPosition = vec3(0,0,0);

   while (size > 0)
   {
      Particle p{vec3(0), random_unit_cube(), vec4(0.95f, 0.93f, 0.59f, 1.0f), 0.5f, 0.4f, random_float() + 1.0f};
      mParticles.push_back(p);
      size--;
   }
}

void MyParticleSystem::update(float dt)
{
   int i = 0;
   int size = mParticles.size();

   for (int i = 0; i < size; i++)
   {
      Particle p = mParticles[i];
      if (p.lifespan < 0.0)
      {
         mParticles[i] = {clickPosition, random_unit_vector(), vec4(0.95f, 0.93f, 0.59f, 1.0f), 0.1f, 0.5f, random_float() + 1.0f};
      }
      else
      {
         p.size = p.size +  dt;
         p.lifespan -= dt;
         mParticles[i] = p;
         // p.color = vec4(0.95f + 0.1*dt, 0.93f + 0.1*dt, 0.59f + 0.1*dt, 1.0f);
         // cout << p.color << endl;
      }
   }
}
