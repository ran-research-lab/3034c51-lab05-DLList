// Gran cantidad de este código fue generado por chatGPT
// Yo lo adapté para simplificarlo para la clase

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "DLList.hpp"
#include "doctest.h"
#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

TEST_CASE("Let's grow some lists and compare them") {
  DLList<int> L{5, 42, 10, 8};
  DLList<int> M{10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

  CHECK(M.toString() == "10 20 30 40 50 60 70 80 90 100");

  //   CHECK(M.media() == 110);
  //   CHECK(L.media() == 52);
}
