#ifndef ECS_ENTITY_H_
#define ECS_ENTITY_H_

#include <string>

namespace martineausw {
namespace ecs {

class Entity {
  public:
    Entity(std::string, unsigned long long);
    ~Entity() = default;

    const std::string get_tag() const;
  private:
    const unsigned long long id;
    const std::string tag;
    bool is_alive = true;
};

} // namespace ecs
} // namespace martineausw

#endif