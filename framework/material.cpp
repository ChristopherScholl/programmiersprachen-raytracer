#include <material.hpp>
#include <ostream>

std::ostream& Material::print(std::ostream& os) const
{
  os << "Name = " << name 
    << ", ka = (" << ka.r << ',' << ka.g << ',' << ka.b 
    << "), kd = (" << kd.r << ',' << kd.g << ',' << kd.b 
    << "), ks = (" << ks.r << ',' << ks.g << ',' << ks.b 
    << "), m  = " << m;
  return os;
}

std::ostream& operator <<(std::ostream& os, Material const& m) 
{
  return m.print(os);
}
