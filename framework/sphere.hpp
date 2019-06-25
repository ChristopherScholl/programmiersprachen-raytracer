#ifndef SPHERE_HPP
#define SPHERE_HPP

#include <color.hpp>
#include <shape.hpp>
#include <glm/vec3.hpp>

class Sphere : Shape
{
public :

  Sphere(std::string name, Color color, glm::vec3 mid, double radius);;

//private:
  glm::vec3 mid_;
  double radius_;
};

// std::ostream& operator<<(std::ostream&, const Pixel&);

#endif // SPHERE_HPP
