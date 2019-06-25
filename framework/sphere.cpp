#include <sphere.hpp>
#include <ostream>

double PI = 3.14159265358979323846;

Sphere::Sphere(std::string name, Color color, glm::vec3 mid, double radius) : Shape(name, color), mid_(mid), radius_(radius) {}

double Sphere::area() const {
  return 4 * PI * radius_ * radius_;
}

double Sphere::volume() const {
  return (4.0/3.0) * PI * radius_ * radius_* radius_;
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
