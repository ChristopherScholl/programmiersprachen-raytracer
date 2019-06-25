#include <box.hpp>
#include <ostream>

Box::Box(std::string name, Color color, glm::vec3 min, glm::vec3 max) : Shape(name, color), min_(min), max_(max) 
{
  std::cout << "called box constructor\n";
}

Box::~Box() 
{
  std::cout << "called box destructor\n";
}

double Box::area() const {
  double a = max_.x - min_.x;
  double b = max_.y - min_.y;
  double c = max_.z - min_.z;
  return 2 * ((a * b) + (a * c) + (b * c));
}

double Box::volume() const {
  double a = max_.x - min_.x;
  double b = max_.y - min_.y;
  double c = max_.z - min_.z;
  return a * b * c;
}

std::ostream& Box::print(std::ostream& os) const
{
  return Shape::print(os) << ", minimaler Eckpunkt = ("
    << min_.x << ','
    << min_.y << ','
    << min_.z << "), maximaler Eckpunkt = ("
    << max_.x << ','
    << max_.y << ','
    << max_.z << ')';
}
