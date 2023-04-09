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

int main() {
    //Vector v = createVector(10);

    test_popBack_notEmptyVector();
    //reserve(&v, SIZE_MAX);

    return 0;
}