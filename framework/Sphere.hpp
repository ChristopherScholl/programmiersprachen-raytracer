#ifndef SPHERE_HPP
#define SPHERE_HPP

// header, system
// #include <iosfwd>

// header, project
// #include <color.hpp>
#include <Shape.hpp>
#include <glm/vec3.hpp>

class Sphere : Shape
{
public :

  Sphere();
  //void print(std::ostream&) const;
  double area() const;
  double volume() const;

  glm::vec3 mid_;
  double radius_;
  //unsigned int x = 0;
  //unsigned int y = 0;
  //Color color = {1.0, 1.0, 1.0};
};

// std::ostream& operator<<(std::ostream&, const Pixel&);

#endif // SPHERE_HPP
