#ifndef SHAPE_HPP
#define SHAPE_HPP

#include <color.hpp>

class Shape
{
public :

  Shape(std::string name, Color color);
  double area() const;
  double volume() const;
  //void print(std::ostream&) const;
  
//private:
  std::string name_ = "DEFAULT";
  Color color_ = { 1.0, 1.0, 1.0 };
};

// std::ostream& operator<<(std::ostream&, const Pixel&);

#endif // SHAPE_HPP
