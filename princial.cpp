#include <iostream>
using namespace std;

int subtracao();

int main(int argc, char const *argv[])
{
    int subtracaoValor = 0;
    //Subtração
        subtracaoValor = subtracao();
        printf("O resultado é: %d", subtracaoValor);
        /* code */
    return 0;
}

int subtracao(){
    int num1, int num2
    printf("Digite um numero:");
    scanf("%d", &num1);
    printf("DIgite o numero que deseja subtrair do primeiro:");
    scanf("%d", &num1);
    int num3 = num1 - num2;
    return num3;
}
