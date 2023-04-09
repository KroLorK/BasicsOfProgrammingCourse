//
// Created by kotel on 09.04.2023.
//

#include <stdio.h>
#include <stdbool.h>

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

bool isEmpty(Vector *v);

bool isFull(Vector *v);

int getVectorValue(Vector *v, size_t i);

void pushBack(Vector *v, int x);

void popBack(Vector *v);

int* atVector(Vector *v, size_t index);

int* back(Vector *v);

int *front(Vector *v);

#endif //LABA20_VECTOR_H_H
