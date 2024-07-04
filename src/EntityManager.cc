#include "EntityManager.h"

#include <memory>
#include "Entity.h"

namespace martineausw {
namespace ecs {

using martineausw::ecs::Entity;

std::shared_ptr<Entity> EntityManager::add_entity(const std::string &tag) {
  auto entity = std::make_shared<Entity>(tag, total_entities++);
  entities.push_back(entity);
  entity_map[tag].push_back(entity);
  return entity;
}

} // namespace ecs
} // namespace martineausw