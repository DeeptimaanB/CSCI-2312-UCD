// Main File

#include <iostream>
#include "OrderedPair.h"

int main(){
    int aa = 0;
    int ab = 0;
    int ba = 0;
    int bb = 0;
    std::cout << "Enter value for a in object a : " << std::endl;
    std::cin >> aa;
    std::cout << "Enter value for b in object a : " << std::endl;
    std::cin >> ab;
    std::cout << "Enter value for a in object b : " << std::endl;
    std::cin >> ba;
    std::cout << "Enter value for b in object b : " << std::endl;
    std::cin >> bb;

    OrderedPair a(aa, ab);
    OrderedPair b(ba, bb);

    std::cout << "Values in obj a" << std::endl;
    a.show();

    std::cout << "Values in obj a" << std::endl;
    b.show();

}