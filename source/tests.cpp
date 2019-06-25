#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <color.hpp>
#include <shape.hpp>

TEST_CASE("Aufgabe 1, 2, 3", "[shapes]") {
  Color white{ 1.0,1.0,1.0 };
  Shape shape = Shape("James", white);
  REQUIRE(shape.name_ == "James");
  REQUIRE(shape.color_.b == 1.0);
}

int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}
