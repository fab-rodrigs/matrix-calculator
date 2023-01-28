#include <stdio.h>
#include <stdlib.h>

int main() {

    int i, j, k, l, lin, col, calc, det;
    int mat[100][100];

    printf("\n--> Operacoes com matrizes <--\n");

    printf("\nNumero de linhas: ");
    scanf("%d", &lin);

    printf("Numero de colunas: ");
    scanf("%d", &col);

    printf("\n");

    for(i=0;i<=lin - 1;i++){ 
        for(j=0;j<=col - 1;j++){
            printf("C%d%d: ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }
    
    printf("\n");

    for(k=0;k<=lin - 1;k++){
        printf("| ");
        for(l=0;l<=col - 1;l++)
        printf("%d ", mat[k][l]);
    printf("| \n");
    }

    do{ 
        
        printf("\nCalculo:\n1.Determinante\n2.Transposta\n3.Inversa\n0.Sair\n-> ");
        scanf("%d", &calc);

        switch (calc)
        {
        case 0:
            printf("\nAte mais!");
            break;

        case 1:
            if(lin <= 3 && col <= 3){
                if(lin == 1 && col == 1)
                    det = mat[0][0];
                else if(lin == 2 && col == 2)
                    det = mat[0][0] * mat[1][1] - mat[0][1] * mat[1][0];
                else if(lin == 3 && col == 3)
                    det = mat[0][0]*mat[1][1]*mat[2][2] + mat[0][1]*mat[1][2]*mat[2][0] + mat[0][2]*mat[1][0]*mat[2][1] - mat[0][2]*mat[1][1]*mat[2][0] - mat[0][0]*mat[1][2]*mat[2][1] - mat[0][1]*mat[1][0]*mat[2][2];
                printf("\nDeterminante = %d", det);
            }
            else
                printf("\nImpossivel calcular =) (apenas matriz 1x1, 2x2 ou 3x3)");
            break;
        
        case 2:
            printf("\n");

        for(k=0;k<=col - 1;k++){
            printf("| ");
            for(l=0;l<=lin - 1;l++)
            printf("%d ", mat[l][k]);
        printf("| \n");
        }

        break;

        case 3:
            printf("\nEm construcao =)\n");
            break;

        default:
            printf("\nOperacao invalida, tente novamente!\n");
            break;
        }

    } while (calc != 0);

    return 0;
}