#include "call_func.h"
#include <iostream>

void transposer2(float m1[2][2], float s[2][2]) {
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            s[j][i] = m1[i][j];
        }
    }
}
void transposer3(float m1[3][3], float s[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            s[j][i] = m1[i][j];
        }
    }
}
