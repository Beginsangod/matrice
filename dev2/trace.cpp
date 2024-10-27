#include "call_func.h"
#include <iostream>

int trace2(float m1[2][2]) {
    int trace = 0;
    for (int i = 0; i < 2; ++i) {
        trace += m1[i][i];
    }
    return trace;
}
int trace3(float m1[3][3]) {
    int trace = 0;
    for (int i = 0; i < 3; ++i) {
        trace += m1[i][i];
    }
    return trace;
}