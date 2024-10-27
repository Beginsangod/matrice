#ifndef CALLFUNC_H_INCLUDED
#define CALLFUNC_H_INCLUDED

void MULTI2(float m1[2][2], float m2[2][2], float s[2][2]);
void MULTI3(float m1[3][3], float m2[3][3],float s[3][3]);
void inverse2(float m1[2][2], float s[2][2], float det);
bool inverse3x3(float m1[3][3], float s[3][3],float det);
float determinant3x3(float m1[3][3], int n);
void transposer2(float m1[2][2], float s[2][2]);
void transposer3(float m1[3][3], float s[3][3]);
int trace2(float m1[2][2]);
int trace3(float m1[3][3]);

#endif