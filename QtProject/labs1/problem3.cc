#include "problem3.h"

void swap(int * a, int * b) {
    int temp = * a;
    * a = * b;
    * b = temp;
}

void swap(int & a, int & b) {
    int temp =  a;
    a = b;
    b = temp;
}

}
