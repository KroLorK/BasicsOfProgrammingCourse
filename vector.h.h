//
// Created by kotel on 09.04.2023.
//

#include <stdio.h>

#ifndef LABA20_VECTOR_H_H
#define LABA20_VECTOR_H_H

typedef struct Vector {
    int *data;
    size_t size;
    size_t capacity;
} Vector;

Vector createVector(size_t n);

void reserve(Vector *v, size_t newCapacity);

void clear(Vector *v);

void shrinkToFit(Vector *v);

void deleteVector(Vector *v);

#endif //LABA20_VECTOR_H_H
