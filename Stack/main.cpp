#include <iostream>
using namespace std;
#include "include/stack.hpp"


int main(int argc, char const *argv[]){
    Stack<char> stack = Stack<char>("([()])");
    stack.display();
    return EXIT_SUCCESS;
}
