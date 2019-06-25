#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <glm/vec3.hpp>
#include <color.hpp>
#include <shape.hpp>
#include <sphere.hpp>
#include <box.hpp>

TEST_CASE("Aufgabe 1, 2, 3", "[shapes]") {
  Color white{ 1.0,1.0,1.0 };
  Color grey{ 0.5,0.5,0.5 };
  Color black{ 0.0,0.0,0.0 };
  glm::vec3 v1{ 0.0,0.0,0.0 };
  glm::vec3 v2{ 1.0,1.0,1.0 };
  glm::vec3 v3{ 2.0,2.0,2.0 };

  Shape shape = Shape("James", white);
  REQUIRE(shape.name_ == "James");
  REQUIRE(shape.color_.b == 1.0);
  
  Sphere sphere = Sphere("George", grey, v1, 1.0);
  REQUIRE(sphere.name_ == "George");
  REQUIRE(sphere.color_.b == 0.5);
  REQUIRE(sphere.mid_.x == 0.0);
  REQUIRE(sphere.radius_ == 1.0);
  REQUIRE(sphere.area() == Approx(12.566370614359173));
  REQUIRE(sphere.volume() == Approx(4.1887902047863908799));

  Box box = Box("Charles", black, v2, v3);
  REQUIRE(box.name_ == "Charles");
  REQUIRE(box.color_.b == 0.0);
  REQUIRE(box.min_.x == 1.0);
  REQUIRE(box.max_.x == 2.0);
  REQUIRE(box.area() == 6.0);
  REQUIRE(box.volume() == 1.0);
}

int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}
