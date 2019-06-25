#ifndef SHAPE_HPP
#define SHAPE_HPP

#include <color.hpp>

class Shape
{
public :

  Shape(std::string name, Color color);
  virtual double area() const;
  virtual double volume() const;
  virtual std::ostream& print(std::ostream& os) const;
  
//private:
  std::string name_ = "DEFAULT";
  Color color_ = { 1.0, 1.0, 1.0 };
};

std::ostream& operator <<(std::ostream& os, Shape const& s);

#endif // SHAPE_HPP
