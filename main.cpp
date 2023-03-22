#include <iostream>
#include <variant>
#include <string>
#include <map>


struct A
{
    int a = 10;

    A& operator= (const A&) = default;
};

int main(int, char**) {

    auto map = std::map<int, A>();
    map.insert({1, A()});
    map.insert({2, A()});
    auto value = map;

    for (auto [key, value] : value)
    {
        std::cout << key << std::endl;
        std::cout << value.a << std::endl;
    }
    std::cout << value[1].a << std::endl;
     std::cout << "Hello Matt, world!\n";
    
    auto a = A();
    a.a = 200;

    auto& b = a;

    std::cout << b.a << std::endl;

    return 1;
}
