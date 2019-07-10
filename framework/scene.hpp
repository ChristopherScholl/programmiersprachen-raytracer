#ifndef BUW_SCENE_HPP
#define BUW_SCENE_HPP

#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <material.hpp>

struct Scene
{
  std::vector<std::shared_ptr<Material>> material_vector;
  std::set<std::shared_ptr<Material>> material_set;
  std::map<std::string, std::shared_ptr<Material>> material_map;
};

Scene create_scene(std::string path);

#endif //#define BUW_SCENE_HPP
