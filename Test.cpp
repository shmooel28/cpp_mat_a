#include "doctest.h"
#include "mat.hpp"
using namespace ariel;

#include <string>
using namespace std;

TEST_CASE("check good print, simple input")
{
    CHECK(mat(3,3,'#','$')==string("###\n#$#\n###"));
    CHECK(mat(5,3,'#','$')==string("###\n#$#\n###"));
    CHECK(mat(7,3,'%','$')==string("###\n#$#\n###"));
    CHECK(mat(3,5,'#','&')==string("###\n#$#\n###"));
    CHECK(mat(3,13,'#','@')==string("###\n#$#\n###"));
}
TEST_CASE("check good print special input")
{
    CHECK(mat(1,1,'#','$')==string("###\n#$#\n###"));
    CHECK(mat(1,101,'#','$')==string("###\n#$#\n###"));
    CHECK(mat(7,7,'7','7')==string("###\n#$#\n###"));
    CHECK(mat(3,5,'#','#')==string("###\n#$#\n###"));
    CHECK(mat(7,7,'%','%')==string("###\n#$#\n###"));
}
TEST_CASE("check odd input")
{
    CHECK_THROWS(mat(2,3,'#','$'));
    CHECK_THROWS(mat(6,3,'#','$'));
    CHECK_THROWS(mat(7,4,'#','$'));
    CHECK_THROWS(mat(3,8,'#','$'));
    CHECK_THROWS(mat(4,10,'#','$'));
}
TEST_CASE("check valid input")
{
    CHECK_THROWS(mat(0,3,'#','$'));
    CHECK_THROWS(mat(6,0,'#','$'));
    CHECK_THROWS(mat(0,0,'#','$'));
    CHECK_THROWS(mat(-5,8,'#','$'));
    CHECK_THROWS(mat(4,'=','#','$'));
}