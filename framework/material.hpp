#ifndef BUW_MATERIAL_HPP
#define BUW_MATERIAL_HPP

#include <iostream>
#include <color.hpp>

struct Material
{
  Material(std::string n, Color a, Color d, Color s, float f) : name(n), ka(a), kd(d), ks(s), m(f) {}

  std::string name;
  Color ka;
  Color kd;
  Color ks;
  float m;
};

#endif //#define BUW_MATERIAL_HPP
