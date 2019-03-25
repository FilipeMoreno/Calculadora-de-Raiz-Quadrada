/* Uma Calculadora Simples para descobrir raiz quadrada
   By: Filipe Moreno - www.filipemoreno.com.br
   Versao: 2.0 - 22/03/2019
*/

#include <stdio.h>
#include<conio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    float x;

    printf(" ");
    Mensagem();
    printf(" ");
    printf("\n  Qual numero voce deseja descobrir a raiz? ");
    scanf("%f", &x);
    double numero, resultado;
    numero = x;
    resultado = sqrt (numero);
    printf("\n==========================================");
    printf ("\n A raiz de %.0f eh: %f\n", numero, resultado );
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
    printf("=========================================\n");
    printf("    Simples calculadora de Raiz quadrada\n");
    printf("    By: Filipe Moreno\n");
    printf("    Versao: 2.0\n");
    printf(" =========================================\n");
}
