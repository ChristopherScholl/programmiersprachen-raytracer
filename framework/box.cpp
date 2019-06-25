#include <box.hpp>
#include <ostream>

Box::Box(std::string name, Color color, glm::vec3 min, glm::vec3 max) : Shape(name, color), min_(min), max_(max) {}

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
