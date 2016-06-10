#include <stdio.h>
#include <stdlib.h>
#define MAX 20
//----------------------------------------------------------------------------------------------
void Receber_Matriz (float Matriz[MAX][MAX], int linhas, int colunas, int numero_da_matriz)
{
    int i, j;
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            printf ("Matriz %d[%d][%d]: ", numero_da_matriz ,i + 1, j + 1);
            scanf ("%f", &Matriz[i][j]);
        }
    }
    system("cls");
    system("pause");
    system("cls");
}
//-----
void Multiplicar_Matrizes (float Matriz_a[MAX][MAX], int linhas_a, int colunas_a, float Matriz_b[MAX][MAX], int linhas_b, int colunas_b, float Matriz_c[MAX][MAX])
{
        int i, j, k;

        for (k = 0; k < linhas_a; k++) // Controla as linhas da matriz A
        {
            for (i = 0; i < colunas_b; i++) // Controla as colunas da matriz B
            {
                Matriz_c[k][i] = 0;
                for (j = 0; j < linhas_b; j++) // Controla as linhas da matriz B
                {
                    Matriz_c[k][i] += Matriz_a[k][j] * Matriz_b[j][i];
                }
            }
        }
}
//-----
void printar_matriz (float Matriz[MAX][MAX], int linhas, int colunas)
{
    int i, j;
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            printf ("%0.f  ", Matriz[i][j]);
        }
        printf ("\n");
    }
}
//-----
int Verificar_multiplicacao ()
{
    printf ("\t\t\t\t=====================\n");
    printf ("\t\t\t\t| Escolha uma opcao:|\n");
    printf ("\t\t\t\t=====================\n");
    printf ("\t|----------------|                          \t   |-----------------|\n");
    printf ("\t|       1        |                          \t   |        0        |\n");
    printf ("\t|                |                          \t   |                 |\n");
    printf ("\t|   VERIFICAR    |                          \t   |                 |\n");
    printf ("\t| MULTIPLICACAO  |                          \t   |     CANCELAR    |\n");
    printf ("\t|                |                          \t   |                 |\n");
    printf ("\t|----------------|                          \t   |-----------------|\n");

    int opcao;

    printf ("\t\t\t\t     Opcao: ");
    scanf ("%d", &opcao);
    printf ("\n");

    if (opcao == 1)
        return 1;
    else
    {
        if (opcao == 0)
            return 0;
        else
        {
            printf ("Opcao invalida, ");
            return 0;
        }

    }
}
//-------------------------------------------------------------------------------------

int main ()
{
//-------------------------------------------------------------------------------------

    float matriz_1[20][20] , matriz_2[20][20],Matriz_c[MAX][MAX];
    int i, j, colunas_1, linhas_2, colunas_2, linhas_1;
    float linhas_float_1, linhas_float_2, colunas_float_1, colunas_float_2;

//-------------------------------------------------------------------------------------
    // Matriz 1 - linhas

    while(1)
    {
        printf ("Entre com o numero de linhas da primeira Matriz: ");
        scanf ("%f", &linhas_float_1);

        linhas_1 = (int) linhas_float_1; // Respeito do dominio

        if (linhas_1 <= 0)
        {
            system("cls");
            printf ("Numero de linhas/colunas deve ser positivo e maior que zero ...\n\n");
            system("pause");
            system("cls");
        }
        else
        {
            if (linhas_1 > 20)
            {
                system("cls");
 	       		printf ("Limite excedido (Maximo 20 linhas/colunas)\n\n");
               	system("pause");
               	system("cls");
            }
            else
            	break;
        }
    }

    system("cls");
//----- Matriz 1 - Colunas

while(1)
    {

        printf ("Entre com o numero de colunas da primeira Matriz: ");
        scanf ("%f", &colunas_float_1);

        colunas_1 = (int) colunas_float_1; // Respeito do dominio

        if (colunas_1 <= 0)
        {
            system("cls");
            printf ("Numero de linhas/colunas deve ser positivo e maior que zero ...\n\n");
            system("pause");
            system("cls");
        }
        else
        {
            if (colunas_1 > 20)
            {
                system("cls");
 	       		printf ("Limite excedido (Maximo 20 linhas/colunas)\n\n");
               	system("pause");
               	system("cls");
            }
            else
            	break;
        }
    }

    system("cls");


//---------------------------------------------------------------------
// Matriz 2 - linhas

    while(1)
    {
        printf ("Entre com o numero de linhas da segunda Matriz: ");
        scanf ("%f", &linhas_float_2);

        linhas_2 = (int) linhas_float_2; // Respeito do dominio

        if (linhas_2 <= 0)
        {
            system("cls");
            printf ("Numero de linhas/colunas deve ser positivo e maior que zero ...\n\n");
            system("pause");
            system("cls");
        }
        else
        {
            if (linhas_2 > 20)
            {
                system("cls");
 	       		printf ("Limite excedido (Maximo 20 linhas/colunas)\n\n");
               	system("pause");
               	system("cls");
            }
            else
            	break;
        }
    }

    system("cls");
//----- Matriz 1 - Colunas

while(1)
    {
        printf ("Entre com o numero de colunas da segunda Matriz: ");
        scanf ("%f", &colunas_float_2);

        colunas_2 = (int) colunas_float_2; // Respeito do dominio

        if (colunas_2 <= 0)
        {
            system("cls");
            printf ("Numero de linhas/colunas deve ser positivo e maior que zero ...\n\n");
            system("pause");
            system("cls");
        }
        else
        {
            if (colunas_2 > 20)
            {
                system("cls");
 	       		printf ("Limite excedido (Maximo 20 linhas/colunas)\n\n");
               	system("pause");
               	system("cls");
            }
            else
            	break;
        }
    }

    system("cls");

//---------------------------------------------------------------------

    if (colunas_1==linhas_2)
    {
        // continue;

        printf ("Entre com os valores da primeira Matriz:\n\n");

        Receber_Matriz (matriz_1, linhas_1,colunas_1,1); // Receber primeira matriz
      //-------------------------------------------------------------------------
        printf ("Entre com os valores da segunda Matriz:\n\n");

        Receber_Matriz (matriz_2,linhas_2,colunas_2, 2); // Receber segunda matriz
      //-----------------------------------------------------------------------
        Multiplicar_Matrizes(matriz_1, linhas_1, colunas_1, matriz_2, linhas_2, colunas_2, Matriz_c); // Mult. de Matrizes
      //-------------------------------------------------------------------------------------------------------------------
        system("cls");

        if (Verificar_multiplicacao())
        {
            system("cls");
            printar_matriz(Matriz_c, linhas_1, colunas_2);
        }
        else
        {
        printf ("Operacao cancelada!\n\n");
        system("pause");
        }                                       // Verificar necessidade de print
      //-------------------------------------------------------------------------
    }
    else
    {
        system("cls");
        printf ("As dimensoes das duas matrizes nao permitem a multiplicacao.\n\n");
        system("pause");
    }
//---------------------------------------------------------------------

    return 0;
}
