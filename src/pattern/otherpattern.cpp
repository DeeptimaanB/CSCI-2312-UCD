#include <iostream>
#include <string>

int main(){
    int user_in = 0;

    std::cout << "Enter how many stars do you wanna see : ";
    std::cin >> user_in;

    for (int i=0; i<user_in; i++){
        using std::cout;
        using std::setw;
        using std::setfill;

        cout << setw(user_in) << setfill('*');
        cout << '*' << std::endl;

    }
}