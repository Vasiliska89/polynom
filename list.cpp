#include "list.h"
void show(list* sp) {
    sp = sp->next;
    while (sp != NULL)
    {
        (sp->coeff > 0) ? std::cout << "+" << sp->coeff << "x^" << sp->deg : std::cout << "" << sp->coeff << "x^" << sp->deg;
        sp = sp->next;
    }
}
void tail(list*& sp, int deg, int coeff) {
    if (sp == NULL) {
        list* tmp = new list;
        tmp->deg = deg;
        tmp->coeff = coeff;
        tmp->next = NULL;
        sp = tmp;
    }
    if (sp->next == NULL) {
        list* tmp = new list;
        tmp->deg = deg;
        tmp->coeff = coeff;
        tmp->next = NULL;
        sp->next = tmp;
    }
    else tail(sp->next, deg, coeff);
}
bool size(list* sp1, list* sp2) {
    int s1 = 0, s2 = 0;
    while (sp1 != NULL) {
        s1++;
        sp1 = sp1->next;
    }
    while (sp2 != NULL) {
        s2++;
        sp2 = sp2->next;
    }
    return s1 == s2;
}
bool inc(list* l1, list* l2) {
    if (l1 != NULL) {
        list* tmp = l2;
        while (true) {
            if (tmp->coeff == l1->coeff && tmp->deg == l1->deg) {
                return inc(l1->next, l2);

            }
            else if (tmp->next == NULL) return false;
            else tmp = tmp->next;
        }
    }
    else return true;
}
bool equal(list*& l1, list*& l2) {
    return(inc(l1, l2)&&size(l1, l2) );
}