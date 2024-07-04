#ifndef ECS_ENTITY_MANAGER_H_
#define ECS_ENTITY_MANAGER_H_

#include <map>
#include <memory>
#include <vector>

#include "Entity.h"

namespace martineausw {
namespace ecs {

class EntityManager {
  public:
    typedef std::vector<std::shared_ptr<martineausw::ecs::Entity>> EntityVec;
    typedef std::map<std::string, EntityVec> EntityMap;    

    EntityManager();
    std::shared_ptr<martineausw::ecs::Entity> add_entity(const std::string &);
    EntityVec& get_entities();
    EntityVec& get_entities(const std::string &);

    void update();
  private:
    EntityVec entities;
    EntityVec add_buffer;
    EntityMap entity_map;
    unsigned long long total_entities;
};

} // namespace ecs
} // namespace martineausw

#endif