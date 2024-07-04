#include "EntityManager.h"

#include <memory>

#include "Entity.h"

namespace martineausw {
namespace ecs {

std::shared_ptr<Entity> EntityManager::add_entity(const std::string &tag) {
  auto entity = std::shared_ptr<Entity>(new Entity(tag, total_entities++));
  add_buffer.push_back(entity);
  return entity;
}

void EntityManager::update() {
  std::for_each(add_buffer.begin(), add_buffer.end(), [this] (auto e) {
    entities.push_back(e);
    entity_map[e->get_tag()].push_back(e);
  });
  add_buffer.clear();
  entities.erase(std::remove_if(entities.begin(), entities.end(), [this] (auto e) {
    return !e->alive();
  }), entities.end());
  std::for_each(entity_map.begin(), entity_map.end(), [this] (auto& pair) {
    pair.second.erase(std::remove_if(pair.second.begin(), pair.second.end(), [this] (auto e) {
      return !e->alive();
    }), pair.second.end());
  });
}

} // namespace ecs
} // namespace martineausw