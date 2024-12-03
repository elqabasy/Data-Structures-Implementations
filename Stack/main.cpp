#include <iostream>
using namespace std;
#include "include/stack.hpp"


int main(int argc, char const *argv[]){
    Stack<int> stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);
    
    return EXIT_SUCCESS;
}
