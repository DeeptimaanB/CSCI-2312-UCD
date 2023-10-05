#include <iostream>

int sum_even(int n);

int main(){
    int n = 0;
    std::cout << "Enter a number till which you want to calculate the sum : ";
    std::cin >> n;
    std::cout << sum_even(n) << std::endl;
}

int sum_even(int n){
    // if n = 0 then return 0
    if (n==0){
        return 0;
    }
    // if n is not even make it even!
    if (n % 2 != 0){
        return sum_even(n-1);
    }
    // if n is even calculate sum
    else{
        return n + sum_even(n-1);
    }
}
