#include <shape.hpp>
#include <ostream>

Shape::Shape(std::string name, Material material) : name_(name), mat_name_(std::make_shared<Material>(material)) 
{
  //std::cout << "called shape constructor\n";
}

Shape::~Shape()
{
  //std::cout << "called shape destructor\n";
}

std::ostream& Shape::print(std::ostream& os) const
{
  os << "Name = " << name_ << ", Material = ("
     << *mat_name_ << ')';
  return os;
}

std::ostream& operator <<(std::ostream& os, Shape const& s) 
{
  return s.print(os);
}
