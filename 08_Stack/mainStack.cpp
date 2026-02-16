#include "Stack.hpp"
#include "Stack.cpp"

int main(void){
    StackArray::Stack<char, 30> stack;

    int i = 0;
    while( i< 20 ){
        stack.push(i + 'A');
        i++;
    }
    stack.print();

    while(!stack.empty()){
        std::stack.pop() << std::endl;
    }

    return 0;
}