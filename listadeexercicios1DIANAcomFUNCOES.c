#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//vamos fazer com do while
int exercicio1(int a, int b){
//1. Solicite ao usuário dois inteiros e exiba a soma, o produto e a divisão desses dois números.
    
    int resultadosoma ;
    int resultadoproduto ; 
    int resultadodivisao ;

    a = 0;
    b = 0;

    printf("\n vamos entrar no execicio");
    
    printf("\n 1. Solicite ao usuario dois inteiros e exiba a soma, o produto e a divisao desses dois numeros.\n");
    
    printf("\n Digite o primeiro numero inteiro: ");
    scanf("%d", &a);
    
    printf("\n Digite o segundo numero inteiro: ");
    scanf("%d", &b);
    
    printf("\n Os inteiros foram: %d e %d\n\n", a, b);
    
   

    int soma(int a, int b){
        int resultado;
        resultado = a + b;
        printf("\n A soma dos inteiros e: %d", resultadosoma);
        return resultado;
    }
    int produto(int a, int b){
        int resultado;
        resultado = a * b;
        printf("\n O produto dos inteiros e: %d", resultadoproduto);
        return resultado;
    }
    int divisao(int a, int b){
        int resultado;
        resultado = a / b;
        printf("\n A divisao dos inteiros e: %d", resultadodivisao);
        return resultado;
    
    
    }

    resultadosoma = soma(a, b);
    resultadoproduto = produto(a, b);
    resultadodivisao = divisao(a, b);
}
double exercicio2(double resultado, double c){
    printf("\n\n AGORA VAMOS CALCULAR A AREA");
    printf("\n 2. Calcule a area de uma circunferencia, e apresente a medida na tela. A area de uma circunferencia e calculada por AREA = 3.14159 * RAIO^2"); 
    
    printf("\n Digite o raio: ");
    scanf("%lf", &c);
    
    c = c * c;
    resultado = 3.14159 * c;
    
    printf("\n O RESULTADO DO RAIO E: %lf ",resultado);

    printf("\n Fim do programa 2! ");
}
double exercicio3(double volume){
    double raio;
    double altura;
    printf("3. Calcule e apresente o valor do volume de uma lata de oleo, utilizando a formula: VOLUME = 3.14159 * RAIO2 * ALTURA");
    printf("\n Qual o raio? \n Digite aqui "); 
    scanf("%lf", &raio);
    printf("\n Qual a altura? \n Digite aqui "); 
    scanf("%lf", &altura);
    
    //função real do exercicio
    raio = raio * raio;
    altura = raio * altura;
    volume = 3.14159 * altura;

    printf("\n O volume de uma lata de oleo E: %lf ",volume);
    printf("\n Fim do programa 3! \n ");
}
double exercicio4(double conversao){
    /*  4. Leia uma temperatura em graus Celsius e apresente-a convertida em graus Farenheit. A fórmula de conversão é:
        F = (9 * C + 160) / 5, sendo F a temperatura em farenheit e C a temperatura em celsius.     */
 double graus;
double F;
double C;

printf("\n Digite o valor em celcius: "); scanf("%lf", &C);
F = 9 * C ;
F = F + 160;
conversao = F;
printf("\n Agora vamos fazer a convecao para farenheit. \n e o resultado e: %lf", conversao);
printf("\n\nfim do exercicio 4");

}


int main(){
//variaveis
    int a = 0;
    int b = 0;
    int d ;
    int resultadosoma ;
    int resultadoproduto ; 
    int resultadodivisao ;
//variaveis flutuantes
    double c;
    
    double resultado;
    double volume;
    float conversao;

do
{
    printf("\nEscolha o exercicio para executar\n");
    printf("\nEscolha o exercicio 1");
    printf("\nEscolha o exercicio 2");
    printf("\nEscolha o exercicio 3");
    printf("\nEscolha o exercicio 4");

    printf("\nEscolha o ZERO para sair");

    printf("\nEscolha o exercicio uma opcao "); scanf("%d",&d);
    //system("cls || clear");

    switch (d)
    {
    case 1: exercicio1(a, b);
        break;
    case 2: exercicio2(resultado , c);
        break;
    case 3: exercicio3(volume);
        break;
    case 4: exercicio4(conversao);
        break;
    default:
    printf("\n DIGITE ALGO VALIDO!\n");
        break;
    }

} while (d != 0);

    
    printf("\n PRECIONE QUALQUER TECLA PARA SAIR \n ");
    getchar();
    return 0;
    
}