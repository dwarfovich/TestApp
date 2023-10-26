#include <iostream>
#include "nlohmann/json.hpp"
#include "TestLib/TestFunctions.h"

int main()
{
    nlohmann::json json;
    json["abc"] = 765;
    std::cout << "Hello, World!\n";
    std::cout << json << std::endl;
    tl::TestFunction();
    tl::TestFunction2();
}
