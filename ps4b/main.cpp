/*Copyright 2022 Aniketh Rai*/
#include "CircularBuffer.h"
int main() {
CircularBuffer<int> obj(10);
std::cout << "Entering 10 elements" << std::endl;
std::cout << "Entering 89 ->" << std::endl;
obj.enqueue(89);
std::cout << "Entering 99 ->" << std::endl;
obj.enqueue(99);
std::cout << "Entering 29 ->" << std::endl;
obj.enqueue(29);
std::cout << "Entering 19 ->" << std::endl;
obj.enqueue(19);
std::cout << "Entering 59 ->" << std::endl;
obj.enqueue(59);
std::cout << "Entering 42 ->" << std::endl;
obj.enqueue(42);
std::cout << "Entering 15 ->" << std::endl;
obj.enqueue(15);
std::cout << "Entering 12 ->" << std::endl;
obj.enqueue(12);
std::cout << "Entering 434 ->" << std::endl;
obj.enqueue(434);
std::cout << "Entering 55 ->" << std::endl;
obj.enqueue(55);
// printing the buffer
obj.prettyPrint();
// deleting 5 ele and printing then deleting 2
for (int i=0 ; i < 5 ; i++) {
    int f = obj.dequeue();
    std::cout << f << "is deleted" << std::endl;
}
// printing the buffer
obj.prettyPrint();
// deleting 2 ele
for (int i=0 ; i < 2 ; i++) {
    int f = obj.dequeue();
    std::cout << f << "is deleted" << std::endl;;
}
// using peek here
int x = obj.peek();
std::cout << "peek element is " << x;
// checking for isEmpty
bool t = obj.isEmpty();
std::cout << "isEmpty() = " << t << std::endl;
// checking for isFull
bool t2 = obj.isFull();
std::cout << "isFull() = " << t2 << std::endl;
}

