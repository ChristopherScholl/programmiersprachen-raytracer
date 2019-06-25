#ifndef BOX_HPP
#define BOX_HPP

#include <color.hpp>
#include <shape.hpp>
#include <glm/vec3.hpp>

class Box : public Shape
{
public :

  Box(std::string name, Color color, glm::vec3 min, glm::vec3 max);
  double area() const;
  double volume() const;
  //void print(std::ostream&) const;

//private:
  glm::vec3 min_;
  glm::vec3 max_;
};

// std::ostream& operator<<(std::ostream&, const Pixel&);

#endif // BOX_HPP
