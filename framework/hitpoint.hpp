#ifndef BUW_HITPOINT_HPP
#define BUW_HITPOINT_HPP

#include <glm/vec3.hpp>
#include <color.hpp>
#include <material.hpp>

struct HitPoint
{
  bool gotHit = false;
  double distance = 0;
  std::string name = "DEFAULT";
  std::shared_ptr<Material> mat_name;
  glm::vec3 position = { 0.0f, 0.0f, 0.0f };
  glm::vec3 direction = { 0.0f, 0.0f, 0.0f };
};

#endif //#define BUW_HITPOINT_HPP
