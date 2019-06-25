#define CATCH_CONFIG_RUNNER
#include <catch.hpp>

#include <glm/vec3.hpp>
#include <glm/glm.hpp>
#include <glm/gtx/intersect.hpp>

#include <ostream>

#include <color.hpp>
#include <shape.hpp>
#include <sphere.hpp>
#include <box.hpp>

TEST_CASE("Aufgaben 1 bis 5", "[shapes]") {
  Color white{ 1.0,1.0,1.0 };
  Color grey{ 0.5,0.5,0.5 };
  Color black{ 0.0,0.0,0.0 };
  glm::vec3 v1{ 0.0,0.0,0.0 };
  glm::vec3 v2{ 1.0,1.0,1.0 };
  glm::vec3 v3{ 2.0,2.0,2.0 };

  Shape shape = Shape("James", white);
  std::cout << shape << std::endl;
  REQUIRE(shape.name_ == "James");
  REQUIRE(shape.color_.b == 1.0);
  
  Sphere sphere = Sphere("George", grey, v1, 1.0);
  std::cout << sphere << std::endl;
  REQUIRE(sphere.name_ == "George");
  REQUIRE(sphere.color_.b == 0.5);
  REQUIRE(sphere.mid_.x == 0.0);
  REQUIRE(sphere.radius_ == 1.0);
  REQUIRE(sphere.area() == Approx(12.566370614359173));
  REQUIRE(sphere.volume() == Approx(4.1887902047863908799));

  Box box = Box("Charles", black, v2, v3);
  std::cout << box << std::endl;
  REQUIRE(box.name_ == "Charles");
  REQUIRE(box.color_.b == 0.0);
  REQUIRE(box.min_.x == 1.0);
  REQUIRE(box.max_.x == 2.0);
  REQUIRE(box.area() == 6.0);
  REQUIRE(box.volume() == 1.0);
}

TEST_CASE(" intersect_ray_sphere ", "[intersect]")
{
  // Ray
  glm::vec3 ray_origin{ 0.0f, 0.0f, 0.0f };
    // ray direction has to be normalized !
    // you can use :
    // v = glm :: normalize ( some_vector )
  glm::vec3 ray_direction{ 0.0f, 0.0f, 1.0f };

  // Sphere
  glm::vec3 sphere_center{ 0.0f ,0.0f, 5.0f };
  float sphere_radius{ 1.0f };

  float distance = 0.0f;
  auto result = glm::intersectRaySphere(ray_origin, ray_direction, sphere_center, sphere_radius * sphere_radius, distance);
  REQUIRE(distance == Approx(4.0f));
}

int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}
