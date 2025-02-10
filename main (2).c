
#include <stdio.h>
#include <stdlib.h>

//a)Solicite ao usuario as dimensões x y e z para uma matriz tridimensional (matriz 3d) de inteiros.
/*int main()
{
    int x,y,z;
    printf("Digame as dimensões da matriz que deseja construir X Y Z\n");
        printf("Dimensão de X:");
    scanf("%d", &x);
        printf("Dimensão de Y:");
    scanf("%d", &y);
        printf("Dimensão de z:");
    scanf("%d", &z);
    printf("Obbrigado, sua matriz ficou X=%d Y=%d Z=%d",x,y,z);
    return 0;
}*/


//b) aloque dinamicamente a memria para a matriz 3d utilizando ponteiro
/* int main()
{
    int x,y,z;
    printf("Digame as dimensões da matriz que deseja construir X Y Z\n");
        printf("Dimensão de X:");
    scanf("%d", &x);
        printf("Dimensão de Y:");
    scanf("%d", &y);
        printf("Dimensão de z:");
    scanf("%d", &z);

    //alocação dinamica
    int ***matriz = (int ***) malloc(x * sizeof(int **));
    
    for (int i=0; i<x ;i++){
        matriz[i]=(int **)malloc(y * sizeof(int *));
        for(int j=0;j<y;j++){
            matriz[i][j]=(int *)malloc(z * sizeof(int));
        }
    }
    printf("Memoria para matriz alocada com sucesso!!!");
    return 0;
}*/


//c) preencha a matriz 3d co valores fornecidos pelo usuario
/*int main()
{
    int x,y,z;
    printf("Digame as dimensões da matriz que deseja construir X Y Z\n");
        printf("Dimensão de X:");
    scanf("%d", &x);
        printf("Dimensão de Y:");
    scanf("%d", &y);
        printf("Dimensão de z:");
    scanf("%d", &z);

    //alocação dinamica
    int ***matriz = (int ***) malloc(x * sizeof(int **));
    
    for (int i=0; i<x ;i++){
        matriz[i]=(int **)malloc(y * sizeof(int *));
        for(int j=0;j<y;j++){
            matriz[i][j]=(int *)malloc(z * sizeof(int));
        }
    }
    printf("Digite os valores para preencher a matriz 3d:");
    for(int i=0; i<x;i++){
        for(int j=0;j<y;j++){
            for(int b=0;b<z;b++){
                printf("Elemento [%d] [%d] [%d]:",i,j,b);
                scanf("%d", &matriz[i][j][b]);
            }
        }
    }
    printf("Matriz preenchida com sucesso!!");

    return 0;
}*/

//d)Imprima a matriz 3d exibindo os valores de cada camada linha por linha para cada uma das matrizes
/*int main()
{
    int x,y,z;
    printf("Digame as dimensões da matriz que deseja construir X Y Z\n");
        printf("Dimensão de X:");
    scanf("%d", &x);
        printf("Dimensão de Y:");
    scanf("%d", &y);
        printf("Dimensão de z:");
    scanf("%d", &z);

    //alocação dinamica
    int ***matriz = (int ***) malloc(x * sizeof(int **));
    
    for (int i=0; i<x ;i++){
        matriz[i]=(int **)malloc(y * sizeof(int *));
        for(int j=0;j<y;j++){
            matriz[i][j]=(int *)malloc(z * sizeof(int));
        }
    }
    printf("Digite os valores para preencher a matriz 3d:");
    for(int i=0; i<x;i++){
        for(int j=0;j<y;j++){
            for(int b=0;b<z;b++){
                printf("Elemento [%d] [%d] [%d]:",i,j,b);
                scanf("%d", &matriz[i][j][b]);
            }
        }
    }
    
    printf("Matriz 3d\n");
    for(int i =0;i<x;i++){
            printf("Camada:%d \n",i);
        for(int j=0;j<y;j++){
            for(int b=0;b<z;b++){
                printf("%d",matriz[i][j][b]);
            }
            printf("\n");
        }
        printf("\n");

    }
    
    return 0;
}*/

//e) Liberação de memoria alocada dinamicamente
int main()
{
    int x,y,z;
    printf("Digame as dimensões da matriz que deseja construir X Y Z\n");
        printf("Dimensão de X:");
    scanf("%d", &x);
        printf("Dimensão de Y:");
    scanf("%d", &y);
        printf("Dimensão de z:");
    scanf("%d", &z);

    //alocação dinamica
    int ***matriz = (int ***) malloc(x * sizeof(int **));
    
    for (int i=0; i<x ;i++){
        matriz[i]=(int **)malloc(y * sizeof(int *));
        for(int j=0;j<y;j++){
            matriz[i][j]=(int *)malloc(z * sizeof(int));
        }
    }
    printf("Digite os valores para preencher a matriz 3d:");
    for(int i=0; i<x;i++){
        for(int j=0;j<y;j++){
            for(int b=0;b<z;b++){
                printf("Elemento [%d] [%d] [%d]:",i,j,b);
                scanf("%d", &matriz[i][j][b]);
            }
        }
    }
    
    printf("Matriz 3d\n");
    for(int i =0;i<x;i++){
            printf("Camada:%d \n",i);
        for(int j=0;j<y;j++){
            for(int b=0;b<z;b++){
                printf("%d",matriz[i][j][b]);
            }
            printf("\n");
        }
        printf("\n");

    }
    
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            free(matriz[i][j]);
        }
        free(matriz[i]);
    }
    free(matriz);
    printf("Memoria liberada!!!!");
    
    return 0;
}
