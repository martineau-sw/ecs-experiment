#include "EntityManager.h"

#include <memory>
#include "Entity.h"

namespace martineausw {
namespace ecs {

using martineausw::ecs::Entity;

std::shared_ptr<Entity> EntityManager::add_entity(const std::string &tag) {
  auto entity = std::make_shared<Entity>(tag, total_entities++);
  add_buffer.emplace_back(entity);
  return entity;
}

void EntityManager::update() {
  std::for_each(add_buffer.begin(), add_buffer.end(), [this] (auto e) {
    entities.push_back(e);
    entity_map[e->get_tag()].push_back(e);
  });
  add_buffer.clear();
}

} // namespace ecs
} // namespace martineausw