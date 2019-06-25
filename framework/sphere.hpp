#ifndef SPHERE_HPP
#define SPHERE_HPP

#include <color.hpp>
#include <shape.hpp>
#include <glm/vec3.hpp>

class Sphere : public Shape
{
public :

  Sphere(std::string name, Color color, glm::vec3 mid, double radius);;
  double area() const;
  double volume() const;

//private:
  glm::vec3 mid_;
  double radius_ = 0.0;
};

// std::ostream& operator<<(std::ostream&, const Pixel&);

#endif // SPHERE_HPP
