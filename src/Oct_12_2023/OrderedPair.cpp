// OrderedPair CPP File

#include <iostream>
#include "OrderedPair.h"
#include <cmath>

OrderedPair::OrderedPair(int a, int b){
    this->a = a;
    this->b = b;
}

//setters
void OrderedPair::setA(int aa){
    a = aa;
}

void OrderedPair::setB(int bb){
    b = bb;
}

//getters
int OrderedPair::getA(){
    return a;
}

int OrderedPair::getB(){
    return b;
}

//functions
void OrderedPair::add(OrderedPair o){
    std::cout << "Sum of a and b: " << o.getA()+o.getB() <<std::endl;
}

void OrderedPair::add(OrderedPair o1, OrderedPair o2){
    std::cout << "Sum of a's: " << o1.getA()+o2.getA() << std::endl;
    std::cout << "Sum of b's: " << o1.getB()+o2.getB() << std::endl;
}

void OrderedPair::sub(OrderedPair o){
    std::cout << o.getA()+o.getB() << std::endl;
}

void OrderedPair::sub(OrderedPair o1, OrderedPair o2){
    std::cout << "Sub of a's: " << o1.getA()-o2.getA() << std::endl;
    std::cout << "Sub of b's: " << o1.getB()-o2.getB() << std::endl;
}

void OrderedPair::mul(){
    std::cout << "Product of a and b: " << getA()*getB() << std::endl;
}

void OrderedPair::exp(){
    std::cout << "Exponent of a and b: " << pow(a,b) << std::endl;
}

void OrderedPair::show(){
    std::cout << "Value of a: " << getA() << std::endl;
    std::cout << "Value of b: " << getB() << std::endl;
}