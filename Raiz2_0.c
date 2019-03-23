/* Uma Calculadora Simples para descobrir raiz quadrada
   Autor: Filipe Moreno
   Data: 23/03/2019
   Versao: 2.0 */

#include <stdio.h>
#include<conio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    float x;

    printf(" ");
    Mensagem();
    printf(" ");
    printf("\n  Qual numero voce deseja saber a raiz? ");
    scanf("%f", &x);
    double parametro, resultado;
    parametro = x;
    resultado = sqrt (parametro);
    printf("\n==========================================");
    printf ("\n A raiz de %.0f eh: %f\n", parametro, resultado );
    printf("==========================================\n");
    return outro();
}

int outro()
{
    int opcao;
    printf("  \n  Voce deseja realizar outra operacao?");
    printf("\n  Digite: \n       1 para SIM\n       2 para NAO");
    printf("\n ");
    scanf("%d", &opcao);

switch(opcao)
{
case 1:
    system("@cls||clear");
    return main();

case 2:
    return 0;

default:
    printf("Opcao Invalida. Tente novamente");
    return outro();
}
}

void Mensagem (void){
    printf("========================================\n");
    printf("    Simples calculadora de Raiz quadrada\n");
    printf("    By: Filipe Moreno\n");
    printf("    Versao: 2.0\n");
    printf(" ========================================\n");
}
