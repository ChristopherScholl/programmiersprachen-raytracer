#ifndef SHAPE_HPP
#define SHAPE_HPP

#include <color.hpp>
#include <Ray.hpp>
#include <HitPoint.hpp>
#include <material.hpp>

class Shape
{
public :

  Shape(std::string name, Material material);
  ~Shape();
  virtual double area() const = 0;
  virtual double volume() const = 0;
  virtual std::ostream& print(std::ostream& os) const;
  virtual HitPoint intersect(Ray const& ray) const = 0;
  
//private:
  std::string name_ = "DEFAULT";
  std::shared_ptr<Material> mat_name_;
};

std::ostream& operator <<(std::ostream& os, Shape const& s);

#endif // SHAPE_HPP
