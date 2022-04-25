#include "example.h"

#include "iostream"

void todo_move_me_out() {
std::cout << "This function shoul be located in the separated sourse file" << std::endl;
}

int main() {
    std::cout << "Hello, Worldl" << std::endl;

    exampe_function();
    todo_move_me_out();

    return 0;
}