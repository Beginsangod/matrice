#include <iostream>
#include "call_func.h"

int main(int argc, char** argv){
    int c;
    float det,trace;
    std::cout<<"de quelle ordre entre 2 et 3 sont les matrices dont vous voulez les informations";
    std::cin>>c;
    if (c == 2)
    {
        float m1[2][2]={},m2[2][2] = {},s[2][2] = {};
        std::cout<<"entrer les deux matrices en ordre de ligne\n";
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                std::cout<<"matrice 2\n";
                std::cin>>m2[i][j];   
            }
            
        }
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                std::cout<<"matrice 1\n";
                std::cin>>m1[i][j];
            }
        }
        std::cout<<"affichage matrice............\n";
        std::cout<<"matrice 1: \n"<<m1[0][0]<<" "<<m1[0][1]<<"\n"<<m1[1][0]<<" "<<m1[1][1];
        std::cout<<"\nmatrice 2: \n"<<m2[0][0]<<" "<<m2[0][1]<<"\n"<<m2[1][0]<<" "<<m2[1][1];
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                s[i][j]= m1[i][j] + m2[i][j];
            }
        }
        std::cout<<"\nleur somme est de:\n"<<s[0][0]<<" "<<s[0][1]<<"\n"<<s[1][0]<<" "<<s[1][1];
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                s[i][j] = 0;
                s[i][j]= m1[i][j] - m2[i][j];
            }
        }
        std::cout<<"\nleur difference est de:\n"<<s[0][0]<<" "<<s[0][1]<<"\n"<<s[1][0]<<" "<<s[1][1];
        MULTI2(m1, m2, s);
        std::cout<<"\nleur produit est de:\n"<<s[0][0]<<" "<<s[0][1]<<"\n"<<s[1][0]<<" "<<s[1][1];
        det =  m1[0][0] * m1[1][1] - m1[0][1] * m1[1][0];
        std::cout<<"\nle determinant de la matrice 1 est de:\n"<<det;
        if (det != 0)
        {
            inverse2(m1, s, det);
            std::cout<<"\nson inverse est de:\n"<<s[0][0]<<" "<<s[0][1]<<"\n"<<s[1][0]<<" "<<s[1][1];
        }else
        {
          std::cout<<"l'inverse n'est faisable sur cette matrice";  
        }
        transposer2(m1, s);
        std::cout<<"\nla transposer est de:\n"<<s[0][0]<<" "<<s[0][1]<<"\n"<<s[1][0]<<" "<<s[1][1];
        std::cout<<"\nsa trace est de: "<<trace2(m1);

        det =  m2[0][0] * m2[1][1] - m2[0][1] * m2[1][0];
        std::cout<<"\nle determinant de la matrice 2 est de:\n"<<det;
        if (det != 0)
        {
            inverse2(m2, s, det);
            std::cout<<"\nson inverse est de:\n"<<s[0][0]<<" "<<s[0][1]<<"\n"<<s[1][0]<<" "<<s[1][1];
        }else
        {
          std::cout<<"l'inverse n'est faisable sur cette matrice";  
        }
        transposer2(m2, s);
        std::cout<<"\nla transposer est de:\n"<<s[0][0]<<" "<<s[0][1]<<"\n"<<s[1][0]<<" "<<s[1][1];
        std::cout<<"\nsa trace est de: "<<trace2(m2);
    }else if (c == 3)
    {
        float m1[3][3]={},m2[3][3] = {},s[3][3] = {};
        std::cout<<"entrer les deux matrices en ordre de ligne\n";
        for (int i = 0; i < 6; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (i >= 9)
                {
                    int count = 3;
                    std::cout<<"matrice 2\n";
                    std::cin>>m1[i-count][j];
                }else
                {    
                    std::cout<<"matrice 1\n";
                    std::cin>>m2[i][j];
                }
            }
        }  
        std::cout<<"affichage matrice............\n";
        std::cout<<"matrice 1: \n"<<m1[0][0]<<" "<<m1[0][1]<<" "<<m1[0][2]<<"\n"<<m1[1][0]<<" "<<m1[1][1]<<" "<<m1[1][2]<<"\n"<<m1[2][0]<<" "<<m1[2][1]<<" "<<m1[2][2];
        std::cout<<"\nmatrice 2: \n"<<m2[0][0]<<" "<<m2[0][1]<<" "<<m2[0][2]<<"\n"<<m2[1][0]<<" "<<m2[1][1]<<" "<<m2[1][2]<<"\n"<<m2[2][0]<<" "<<m2[2][1]<<" "<<m2[2][2];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                s[i][j]= m1[i][j] + m2[i][j];
            }
        }
        std::cout<<"\nleur somme est de:\n"<<s[0][0]<<" "<<s[0][1]<<" "<<s[0][2]<<"\n"<<s[1][0]<<" "<<s[1][1]<<" "<<s[1][2]<<"\n"<<s[2][0]<<" "<<s[2][1]<<" "<<s[2][2];    
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                s[i][j]= m1[i][j]- m2[i][j];
            }
        }
        std::cout<<"\nleur difference est de:\n"<<s[0][0]<<" "<<s[0][1]<<" "<<s[0][2]<<"\n"<<s[1][0]<<" "<<s[1][1]<<" "<<s[1][2]<<"\n"<<s[2][0]<<" "<<s[2][1]<<" "<<s[2][2];    
        MULTI3(m1, m2, s);
        std::cout<<"\nleur produit est de:\n"<<s[0][0]<<" "<<s[0][1]<<" "<<s[0][2]<<"\n"<<s[1][0]<<" "<<s[1][1]<<" "<<s[1][2]<<"\n"<<s[2][0]<<" "<<s[2][1]<<" "<<s[2][2];
        det = determinant3x3(m1, 3);
        std::cout<<"\nle determinant de la matrice 1 est de:\n"<<det;
        if (det == 0)
        {
           inverse3x3(m1, s, det);
           std::cout<<"\nson inverse est de:\n"<<s[0][0]<<" "<<s[0][1]<<" "<<s[0][2]<<"\n"<<s[1][0]<<" "<<s[1][1]<<" "<<s[1][2]<<"\n"<<s[2][0]<<" "<<s[2][1]<<" "<<s[2][2]; 
        }else
        {
            std::cout<<"l'inverse n'est faisable sur cette matrice";
        }
        transposer3(m1, s);
        std::cout<<"\nson inverse est de:\n"<<s[0][0]<<" "<<s[0][1]<<" "<<s[0][2]<<"\n"<<s[1][0]<<" "<<s[1][1]<<" "<<s[1][2]<<"\n"<<s[2][0]<<" "<<s[2][1]<<" "<<s[2][2];
        std::cout<<"\nsa trace est de: "<<trace3(m1);

        det = determinant3x3(m2, 3);
        std::cout<<"\nle determinant de la matrice 2 est de:\n"<<det;
        if (det == 0)
        {
            inverse3x3(m2, s, det);
            std::cout<<"\nson inverse est de:\n"<<s[0][0]<<" "<<s[0][1]<<" "<<s[0][2]<<"\n"<<s[1][0]<<" "<<s[1][1]<<" "<<s[1][2]<<"\n"<<s[2][0]<<" "<<s[2][1]<<" "<<s[2][2];
        }else
        {
           std::cout<<"l'inverse n'est faisable sur cette matrice";
        }
        transposer3(m2, s);
        std::cout<<"\nson inverse est de:\n"<<s[0][0]<<" "<<s[0][1]<<" "<<s[0][2]<<"\n"<<s[1][0]<<" "<<s[1][1]<<" "<<s[1][2]<<"\n"<<s[2][0]<<" "<<s[2][1]<<" "<<s[2][2];
        std::cout<<"\nsa trace est de: "<<trace3(m2);
    }else
    {
        std::cout<<"choix invalide";
    }
    return 0;
}