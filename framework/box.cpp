#include <box.hpp>
#include <ostream>

Box::Box(std::string name, Color color, glm::vec3 min, double max) : Shape(name, color), min_(min), max_(max) {}

double Box::area() const {
  return 0.0;
}

double Box::volume() const {
  return 0.0;
}

//void Pixel::print(std::ostream& os) const
//{
//  os << "Pixel[" << (int)x << ',' << (int)y << "]("
//     << color.r << ','
//     << color.g << ','
//     << color.b << ')';
//}

//std::ostream& operator<<(std::ostream& os, const Pixel& a)
//{
//  std::ostream::sentry cerberus (os);
//  if (cerberus)
//    a.print(os);
//  return os;
//}
