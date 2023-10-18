#include <iostream>

int main(){
    int myvar = 123;
    int *myvarPtr = &myvar;
    int &myvarRef = myvar;

    std::cout << myvar << " " << myvarPtr << " " << myvarRef;

    int *p1 = new int;
    *p1 = 22;

    int *p2 = new int;
    p2 = p1;

    *p2 = 33;
    
    std::cout << p1 << std::endl;
    std::cout << *p1 << std::endl;
    std::cout << p2 << std::endl;
    std::cout << *p2 << std::endl;
    std::cout << &p1 << std::endl;
    std::cout << &p2 << std::endl;

    delete p1;
    return 0;
}




