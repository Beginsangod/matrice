#include "call_func.h"
#include <iostream>

void inverse2(float m1[2][2], float s[2][2], float det) {
    double invDet = 1.0 / det;
    s[0][0] = invDet * m1[1][1];
    s[0][1] = -invDet * m1[0][1];
    s[1][0] = -invDet * m1[1][0];
    s[1][1] = invDet * m1[0][0];
}
void cofactor3x3(float m1[3][3], float temp[3][3], int p, int q, int n) {
    int i = 0, j = 0;
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            if (row != p && col != q) {
                temp[i][j++] = m1[row][col];
                if (j == n - 1) {
                    j = 0;
                    i++;
                }
            }
        }
    }
}

float determinant3x3(float m1[3][3], int n) {
    float det = 0;
    if (n == 1) return m1[0][0];

    float temp[3][3];
    int sign = 1;

    for (int f = 0; f < n; f++) {
        cofactor3x3(m1, temp, 0, f, n);
        det += sign * m1[0][f] * determinant3x3(temp, n - 1);
        sign = -sign;
    }

    return det;
}

void adjoint3x3(float m1[3][3], float adj[3][3]) {
    if (3 == 1) {
        adj[0][0] = 1;
        return;
    }

    int sign = 1;
    float temp[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cofactor3x3(m1, temp, i, j, 3);
            sign = ((i + j) % 2 == 0) ? 1 : -1;
            adj[j][i] = sign * determinant3x3(temp, 2);
        }
    }
}

bool inverse3x3(float m1[3][3], float s[3][3],float det) {
    float adj[3][3];
    adjoint3x3(m1, adj);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            s[i][j] = adj[i][j] / det;
        }
    }
    return true;
}