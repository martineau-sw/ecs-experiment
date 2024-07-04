#ifndef ECS_VECTOR_2_H_
#define ECS_VECTOR_2_H_

namespace martineausw {
namespace ecs {

class Vector2 {
  public:
    Vector2(double = 0.0f, double = 0.0f);
    ~Vector2();

    Vector2 operator+(const Vector2 &) const;

    float distance(const Vector2 &) const;

    double x;
    double y;
};

} // namespace ecs
} // namespace martineausw

#endif