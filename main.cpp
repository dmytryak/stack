#include "stack.h"

int main()
{
    Stack stack;
    std::cout << stack.isEmpty() << std::endl;
    stack.push(4);
    stack.push(7);
    stack.push(9);
    stack.push(-55);
    stack.show();
    std::cout << stack.pop();
    std::cout << std::endl;
    stack.show();
    std::cout << stack.isEmpty()<<std::endl;
    stack.multiPop(2);
    stack.show();

    std::cout << std::endl << std::endl << std::endl;
    Stack stack2 = stack;
    stack2.show();
    stack2.push(5555);
    stack.show();
    stack2.show();

    std::cout << std::endl << std::endl << std::endl;
    Stack stack3;
    stack3.push(5);
    stack3.push(6);
    stack3.show();
    stack3 = stack;
    stack3.show();
}
