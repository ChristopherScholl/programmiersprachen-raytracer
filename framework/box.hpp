#ifndef BOX_HPP
#define BOX_HPP

#include <color.hpp>
#include <shape.hpp>
#include <glm/vec3.hpp>

class Box : Shape
{
public :

  Box(std::string name, Color color, glm::vec3 min, double max);
  //void print(std::ostream&) const;

//private:
  glm::vec3 min_;
  glm::vec3 max_;
};

// std::ostream& operator<<(std::ostream&, const Pixel&);

#endif // BOX_HPP
