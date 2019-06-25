#include <sphere.hpp>
#include <ostream>

Sphere::Sphere(std::string name, Color color, glm::vec3 mid, double radius) : Shape(name, color), mid_(mid), radius_(radius) {}

double Sphere::area() const {
  return 0.0;
}

double Sphere::volume() const {
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
