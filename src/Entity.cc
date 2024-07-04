#include "Entity.h"

namespace martineausw {
namespace ecs {

Entity::Entity(std::string tag, unsigned long long id) 
  : tag { tag }, id { id } {
}

} // namespace ecs
} // namespace martineausw