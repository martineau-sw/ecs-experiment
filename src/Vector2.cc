#include "Vector2.h"

#include <math.h>

namespace martineausw {
namespace ecs {

Vector2::Vector2(double x, double y) 
  : x { x }, y { y } {
}

Vector2 Vector2::operator+(const Vector2 &rhs) const {
  return Vector2 { x + rhs.x, y + rhs.y };
}


} // namespace ecs
} // namespace martineausw