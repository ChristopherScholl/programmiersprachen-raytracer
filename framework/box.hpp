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
  std::ostream& print(std::ostream& os) const;

//private:
  glm::vec3 min_;
  glm::vec3 max_;
};

#endif // BOX_HPP
