// Learning C++ 
// Exercise 02_05
// Type inference with auto, by Eduardo Corpeño 

#include <iostream>
#include <typeinfo>

int main(){
    // using auto keyword we don't need to intialise the type of variables it will get the type when we are intializing.
    auto a = 6;
    auto b = 99999999999999;
    auto c = 3.14f;
    auto d = 7.895;
    auto e = true;
    auto f = 'f';
    auto g = "This is Zaheer"; // you will get type for g as PKc which is a fancy word for string.

    std::cout << "type of a is " << typeid(a).name() << std::endl;
    std::cout << "type of b is " << typeid(b).name() << std::endl;
    std::cout << "type of c is " << typeid(c).name() << std::endl;
    std::cout << "type of d is " << typeid(d).name() << std::endl;
    std::cout << "type of e is " << typeid(e).name() << std::endl;
    std::cout << "type of f is " << typeid(f).name() << std::endl;
    std::cout << "type of g is " << typeid(g).name() << std::endl;
    std::cout << std::endl << std::endl;
    return (0);
}
