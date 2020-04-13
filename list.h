#include <iostream>
#include <locale>
#include <conio.h>

struct list {
    int deg;
    int coeff;
    list* next;

};
void show(list* sp);
void tail(list*& sp, int deg, int coeff);
bool equal(list*& l1, list*& l2);