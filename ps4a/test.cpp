/*Copyright 2022 Aniketh Rai*/
#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE Main
#include <boost/test/unit_test.hpp>
#include "CircularBuffer.h"

BOOST_AUTO_TEST_CASE(constructor) {
BOOST_REQUIRE_THROW(CircularBuffer<size_t>(0), std::exception);
BOOST_REQUIRE_THROW(CircularBuffer<size_t>(0), std::invalid_argument);
BOOST_REQUIRE_NO_THROW(CircularBuffer<size_t>(20));
}
BOOST_AUTO_TEST_CASE(size) {
CircularBuffer<int> testBuffer(10);
BOOST_REQUIRE(testBuffer.size() == 0);
testBuffer.enqueue(5);
testBuffer.enqueue(5);
BOOST_REQUIRE(testBuffer.size() == 2);
testBuffer.dequeue();
BOOST_REQUIRE(testBuffer.size() == 1);
testBuffer.dequeue();
BOOST_REQUIRE(testBuffer.size() == 0);
testBuffer.enqueue(5);
testBuffer.dequeue();
BOOST_REQUIRE(testBuffer.size() == 0);
}
BOOST_AUTO_TEST_CASE(isEmpty) {
CircularBuffer<int> testBuffer(5);
BOOST_REQUIRE(testBuffer.isEmpty() == true);
testBuffer.enqueue(5);
BOOST_REQUIRE(testBuffer.isEmpty() == false);
}
BOOST_AUTO_TEST_CASE(isFull) {
CircularBuffer<int> testBuffer(1);
BOOST_REQUIRE(testBuffer.isFull() == false);
testBuffer.enqueue(5);
BOOST_REQUIRE(testBuffer.isFull() == true);
}
BOOST_AUTO_TEST_CASE(Enqueue) {
CircularBuffer<int> testBuffer(1);
BOOST_REQUIRE_NO_THROW(testBuffer.enqueue(1));
BOOST_REQUIRE(testBuffer.dequeue() == 1);
testBuffer.enqueue(1);
BOOST_REQUIRE_THROW(testBuffer.enqueue(1), std::runtime_error);
}
BOOST_AUTO_TEST_CASE(Dequeue) {
CircularBuffer<int> testBuffer(5);
testBuffer.enqueue(56);
testBuffer.enqueue(32);
testBuffer.enqueue(23);
testBuffer.enqueue(89);
testBuffer.enqueue(99);
BOOST_REQUIRE(testBuffer.dequeue() == 56);
BOOST_REQUIRE(testBuffer.dequeue() == 32);
BOOST_REQUIRE(testBuffer.dequeue() == 23);
BOOST_REQUIRE(testBuffer.dequeue() == 89);
BOOST_REQUIRE(testBuffer.dequeue() == 99);
BOOST_REQUIRE_THROW(testBuffer.dequeue(), std::runtime_error);
}
BOOST_AUTO_TEST_CASE(peek) {
CircularBuffer<int> testBuffer(1);
BOOST_REQUIRE_THROW(testBuffer.peek(), std::runtime_error);
testBuffer.enqueue(1);
BOOST_REQUIRE(testBuffer.peek() == 1);
}
