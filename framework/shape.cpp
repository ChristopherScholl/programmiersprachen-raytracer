#include <shape.hpp>
#include <ostream>

Shape::Shape(std::string name, Color color) : name_(name), color_(color) {}

double Shape::area() const {
  return 0.0;
}

double Shape::volume() const {
  return 0.0;
}

std::ostream& Shape::print(std::ostream& os) const
{
  os << "Name = " << name_ << ", Farbe = ("
     << color_.r << ','
     << color_.g << ','
     << color_.b << ')';
  return os;
}

std::ostream& operator <<(std::ostream& os, Shape const& s) 
{
  return s.print(os);
}
//std::ostream& operator<<(std::ostream& os, const Pixel& a)
//{
//  std::ostream::sentry cerberus (os);
//  if (cerberus)
//    a.print(os);
//  return os;
//}
