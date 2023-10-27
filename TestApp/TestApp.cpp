#include "TestPCH.h"
#include <iostream>

int main()
{
    nlohmann::json json;
    json["abc"] = 765;
    std::cout << "Hello, World!\n";
    std::cout << json << std::endl;
    tl::TestFunction();
    tl::TestFunction2();
}
