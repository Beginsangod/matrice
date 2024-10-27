#include "call_func.h"
#include <iostream>

void MULTI2(float m1[2][2],float m2[2][2], float s[2][2]){
    for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                s[i][j] = (m1[i][0] * m2[0][j]) + (m1[i][1] * m2[1][j]);
                std::cout<<s[i][j];
            }  
        }
}
void MULTI3(float m1[3][3], float m2[3][3],float s[3][3]){
    for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                s[i][j] = (m1[i][0] * m2[0][j]) + (m1[i][1] * m2[1][j]) + (m1[i][2] * m2[2][j]);
            }
        }
}