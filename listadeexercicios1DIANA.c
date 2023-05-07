#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//1. Solicite ao usuário dois inteiros e exiba a soma, o produto e a divisão desses dois números.

int soma(int a, int b){
    int resultado;
    resultado = a + b;
    return resultado;
}
int produto(int a, int b){
    int resultado;
    resultado = a * b;
    return resultado;
}
int divisao(int a, int b){
    int resultado;
    resultado = a / b;
    return resultado;
}

/*double area(double c){
    double c;
    
    double resultado;

    printf("\n 2. Calcule a área de uma circunferência, e apresente a medida na tela. A área de uma circunferência é calculada por AREA = 3.14159 * RAIO^2"); 
    
    printf("\n Digite o raio: ");
    scanf("%lf", &c);

    return resultado = 3.14159 * (c * c);
}
*/
int main(){

    int a ;
    int b ;
    double c;
    double d;

    int resultadosoma ;
    int resultadoproduto ; 
    int resultadodivisao ;

    printf("\n Vai tomar no cu caralho\n");
    printf("\n vamos entrar no execicio");
    
    printf("\n 1. Solicite ao usuario dois inteiros e exiba a soma, o produto e a divisao desses dois numeros.\n");
    
    printf("\n Digite o primeiro numero inteiro: ");
    scanf("%d", &a);
    
    printf("\n Digite o segundo numero inteiro: ");
    scanf("%d", &b);
    
    
    resultadosoma = soma(a, b);
    resultadoproduto = produto(a, b);
    resultadodivisao = divisao(a, b);
    
    printf("\n A soma dos inteiros e: %d", resultadosoma);
    printf("\n O produto dos inteiros e: %d", resultadoproduto);
    printf("\n A divisao dos inteiros e: %d", resultadodivisao);

    //area( a, b);
    

    getchar();
    return 0;
    
}