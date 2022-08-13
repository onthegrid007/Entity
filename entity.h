#ifndef ENTITY_H
#define ENTITY_H

#include "vendor/CPPLOG/vendor/LifetimeEvent/vendor/UUID/UUID.h"
#include "vendor/SI/include/SI/mass.h"
#include "vendor/SI/include/SI/velocity.h"
#include "vendor/glm/glm/glm.hpp"
#include "vendor/glm/glm/mat4x4.hpp"
#include "vendor/glm/glm/gtx/transform.hpp"
#include "vendor/glm/glm/gtc/type_ptr.hpp"
using namespace glm;
using namespace SI;
using namespace SI::literals;

class Entity {
    public:
    Entity();

    private:
    dvec3 m_position = {0, 0, 0};
    dvec3 m_rotation = {0, 0, 0};
    kilo_gram_t<long double> m_mass = 1.0_kg;
    metre_per_second_t<long double> m_velocity = 0.0_m_p_s;
    // bool m_physicsAffected = true;
    
    protected:
    UUID m_UUID;
    std::string m_name;
};

#endif