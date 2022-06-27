/*Copyright 2022 Aniketh Rai*/
#ifndef CIRCULARBUFFER_H_
#define CIRCULARBUFFER_H_
#include <stdlib.h>
#include <stdint.h>
#include <vector>
#include <exception>
#include <stdexcept>
#include <iostream>


template <class T>
class CircularBuffer {
 public:
explicit CircularBuffer(size_t capacity) {
    if (capacity < 1) {            // checking for condn where size must be  > 0
  throw
    std::invalid_argument("CircularBuffer constructor: capacity > 0");}
Max_size = capacity;
buffer.resize(Max_size);
head = 0;
tail = 0;
len = 0;
}

void Empty() {
  head = 0;
  tail = 0;
  len = 0;
}

void prettyPrint() {
int f = 0;
int back = head;
std::cout << "Buffer: ";
while (f < len) {
if (back >= Max_size) {back = 0;}
std::cout << buffer[back] << " ";
back++;
f++;}
std::cout << std::endl;}
bool isEmpty() {
auto lamda = [](int len){ return len == 0;  };
return lamda(len);
}

bool isFull() {
return (len == Max_size) ? true : false; }  // use of ternary operator
// enqueu
void enqueue(T item) {
if (isFull()) {
throw
std::runtime_error("enqueue: can't enqueue to a full ring");
}
if (tail >= Max_size) {
tail = 0;}
buffer.at(tail) = item;
tail++;
len++;
}
// deque
inline T dequeue() {
    if (isEmpty()) {
throw
  std::runtime_error("dequeue: can't dequeue an empty ring");
  }
int first = buffer.at(head);
buffer.at(head) = 0;
head++;
len--;
if (head >= Max_size) {
head = 0;}
return first;
}
// peek
inline T peek() {
    if (isEmpty()) {
  throw
  std::runtime_error("cant peek");}
return buffer.at(head);
}
size_t size() {
    return len;
}

 private:
std::vector<int> buffer;
int len;
int Max_size;
int head;
int tail;
};
#endif  // CIRCULARBUFFER_H_
