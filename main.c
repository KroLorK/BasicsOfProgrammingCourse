#include <stdio.h>
#include "vector.h.h"
#include <stdint.h>

int main() {
    Vector v = createVector(10);
    reserve(&v, SIZE_MAX);

    return 0;
}