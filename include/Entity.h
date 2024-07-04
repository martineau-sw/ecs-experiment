#ifndef ECS_ENTITY_H_
#define ECS_ENTITY_H_

#include <string>
#include <memory> 

namespace martineausw {
namespace ecs {

class Entity {
  friend class EntityManager;
  public:
    ~Entity() = default;
    const std::string &get_tag() const;
    bool alive() const;
    inline void destroy() { is_alive = false; }
  private:
    Entity(std::string, unsigned long long);
    const unsigned long long id;
    const std::string tag;
    bool is_alive = true;
};

} // namespace ecs
} // namespace martineausw

#endif