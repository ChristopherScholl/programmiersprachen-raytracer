#include <shape.hpp>
#include <ostream>

Shape::Shape(std::string name, Color color) : name_(name), color_(color) {}

//double Shape::area() const{
//  
//}

//double Shape::volume() const{
//  
//}

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
