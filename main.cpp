// Gran cantidad de este código fue generado por chatGPT
// Yo lo adapté para simplificarlo para la clase


#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include <stdexcept>
#include <iostream>
#include <string>
#include "DLList.hpp"

using namespace std;


TEST_CASE("Let's grow some lists and compare them") {
    DLList<int> L{42};
    DLList<int> M{10,20,30,40,50,60,70,80,90,100};

    CHECK(M.toString() == "10 20 30 40 50 60 70 80 90 100");

    //L.concat(M);
    // CHECK(L.toString() == "42 10 20 30 40 50 60 70 80 90 100");

    // CHECK(M.size() == 0);

}
