// OrderedPair Header File

#include <iostream>

class OrderedPair{
private:
    int a;
    int b;

public:
    explicit OrderedPair(int a, int b);

    //setters
    void setA(int aa);
    void setB(int bb);

    //getters
    int getA();
    int getB();

    //functions
    void add(OrderedPair o);
    void add(OrderedPair o1, OrderedPair o2);
    void sub(OrderedPair o);
    void sub(OrderedPair o1, OrderedPair o2);
    void mul();
    void exp();
    void show();
};