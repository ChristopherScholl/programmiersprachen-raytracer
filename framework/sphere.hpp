#ifndef SPHERE_HPP
#define SPHERE_HPP

#include <color.hpp>
#include <shape.hpp>
#include <Ray.hpp>
#include <HitPoint.hpp>
#include <glm/vec3.hpp>

class Sphere : public Shape
{
public :

  Sphere(std::string name, Material material, glm::vec3 mid, double radius);
  ~Sphere();
  double area() const;
  double volume() const;
  std::ostream& print(std::ostream& os) const override;
  HitPoint intersect(Ray const& ray) const override;

//private:
  glm::vec3 mid_;
  double radius_ = 0.0;
};

#endif // SPHERE_HPP
