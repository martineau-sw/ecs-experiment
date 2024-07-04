#include "Entity.h"

#include <string>

namespace martineausw {
namespace ecs {

Entity::Entity(std::string tag, unsigned long long id) 
  : tag { tag }, id { id } {
}

const std::string Entity::get_tag() const {
  return tag;
}
} // namespace ecs
} // namespace martineausw