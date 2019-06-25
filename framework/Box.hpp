#ifndef BOX_HPP
#define BOX_HPP

// header, system
// #include <iosfwd>

// header, project
// #include <color.hpp>
#include <Shape.hpp>
#include <glm/vec3.hpp>

class Box : Shape
{
public :

  Box();
  //void print(std::ostream&) const;
  double area() const;
  double volume() const;

  glm::vec3 min_;
  glm::vec3 max_;
  //unsigned int x = 0;
  //unsigned int y = 0;
  //Color color = {1.0, 1.0, 1.0};
};

// std::ostream& operator<<(std::ostream&, const Pixel&);

#endif // BOX_HPP
