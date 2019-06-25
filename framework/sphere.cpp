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

std::ostream& Sphere::print(std::ostream& os) const
{
  return Shape::print(os) << ", Mittelpunkt = ("
    << mid_.x << ','
    << mid_.y << ','
    << mid_.z << "), Radius = " << radius_;
}
