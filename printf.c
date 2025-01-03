// #include <stdio.h> //como ela vai ser imprimido

// int main(){
// int idade = 25;
// float altura = 1.75;
// char opcao = 's';
// char nome[20] = "camila";


// printf("Idade: %d\n", idade);
// printf("Altura:%f\n", altura);
// printf("Opção: %c\n", opcao);
// printf("Nome: %s Idade: %d\n", nome, idade);
// printf("altura: %e\n", altura);
// }

//exemplos scanf
#include <stdio.h>
int main(){
    int idade;
    char opcao;
    float altura;

    printf("entre com sua idade e altura:\n");
    scanf("%d %f", &idade, &altura);
    printf("idade: %d\n", idade);
    printf("altura: %f\n", altura);
    printf("entre com a opcao\n");
    scanf(" %c", &opcao);
    printf("a opção é: %c", opcao);

}