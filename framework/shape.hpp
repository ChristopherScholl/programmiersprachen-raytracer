#ifndef SHAPE_HPP
#define SHAPE_HPP

// header, system
// #include <iosfwd>

// header, project
// #include <color.hpp>

class Shape
{
public :

  Shape();
  //void print(std::ostream&) const;
  double area() const;
  double volume() const;

  //unsigned int x = 0;
  //unsigned int y = 0;
  //Color color = {1.0, 1.0, 1.0};
};

// std::ostream& operator<<(std::ostream&, const Pixel&);

#endif // SHAPE_HPP
