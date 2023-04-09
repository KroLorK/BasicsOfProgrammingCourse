#include <stdio.h>
#include "vector.h.h"
#include <stdint.h>
#include <assert.h>

void test_popBack_notEmptyVector() {
    Vector v = createVector(0);
    pushBack(&v, 10);
    assert(v.size == 1);
    popBack(&v);
    assert(v.size == 0);
    assert(v.capacity == 1);
}

void test_atVector_notEmptyVector() {
    Vector v = createVector(2);
    pushBack(&v, 42);
    assert(atVector(&v, 0) == &v.data[0]);
}

void test_back_oneElementInVector() {
    Vector v = createVector(2);
    pushBack(&v, 24);
    assert(back(&v) == &v.data[0]);
}

void test_front_oneElementInVector() {
    Vector v = createVector(2);
    pushBack(&v, 84);
    assert(front(&v) == &v.data[0]);
}

int main() {
    //Vector v = createVector(10);

    test_popBack_notEmptyVector();
    test_atVector_notEmptyVector();
    test_back_oneElementInVector();
    test_front_oneElementInVector();

    //reserve(&v, SIZE_MAX);

    return 0;
}