#include <stdio.h>
#include <stdlib.h>

float mediaMatriz(float m[5] [3])  {
    float media = 0;

    for (int i = 0; i < 5;  i++) {
            for (int j = 0; j < 3; j++) {
                media = media  + m[i][j];

        }

    }
    return media / 6.0;
}

int main() {
    float mat[5] [3] =  {{3.4, 5.6, 4.0},
                                    {2.0,1.1, 4.9},
                                    {5.6, 8.8, 5.6},
                                    {1.1, 1.2, 8.8},
                                    {2.2, 7.0, 9.5}};
    float media = mediaMatriz(mat) ;

    printf ("A media  da  matriz foi %.2f" ,  media);

    return 0;

}
