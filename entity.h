#ifndef ENTITY_H
#define ENTITY_H

#include "vendor/CPPLOG/vendor/Profiler/vendor/FPNBits/vendor/DynamicDLL/vendor/FileUtilities/vendor/STDExtras/vendor/ThreadPool/threadpool.hpp"
#include "vendor/CPPLOG/vendor/Profiler/vendor/FPNBits/vendor/DynamicDLL/vendor/FileUtilities/vendor/STDExtras/vendor/ThreadPool/vendor/ADVClock/vendor/Timestamp/vendor/SI/include/SI/astronomic.h"
#include "vendor/CPPLOG/vendor/Profiler/vendor/FPNBits/vendor/DynamicDLL/vendor/FileUtilities/vendor/STDExtras/vendor/ThreadPool/vendor/ADVClock/vendor/Timestamp/vendor/SI/include/SI/velocity.h"
#include "vendor/NCubedTree/vendor/glm/glm/glm.hpp"
#include "vendor/NCubedTree/vendor/glm/glm/mat4x4.hpp"
#include "vendor/NCubedTree/vendor/glm/glm/gtx/transform.hpp"
#include "vendor/NCubedTree/vendor/glm/glm/gtc/type_ptr.hpp"
#include "vendor/CPPLOG/vendor/LifetimeEvent/vendor/UUID/UUID.hpp"

using namespace glm;
using namespace SI;
using namespace SI::literals;

class Entity {
    public:
    typedef kilo_gram_t<long double> MassType;
    typedef metre_per_second_t<long double> VelocityType;
    Entity();
    
    private:
    dvec3 m_position = {0, 0, 0};
    dvec3 m_rotation = {0, 0, 0};
    MassType m_mass = 1.0_kg;
    VelocityType m_velocity = 0.0_m_p_s;
    
    protected:
    UUID m_UUID;
    std::string m_name;
};

#endif