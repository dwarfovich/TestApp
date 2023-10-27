#include "TestPCH.h"
#include <iostream>
#include "TestLib/TargetEntity.h"
#include "TestLib/TString.h"

int main()
{
    nlohmann::json json;
    json["abc"] = 765;
    std::cout << "Hello, World!\n";
    std::cout << json << std::endl;
    tl::TestFunction();
    tl::TestFunction2();

    TargetEntity te;
    TString      ts;
}
