#include <iostream>
#include "stdio.h"
#include "stdlib.h"

using namespace std;

int Soma (){
    int a;
    int b;

    printf("\nDigite o primeiro numero: ");
    scanf ("%d",&a);

  
    printf("\nDigite o primeiro numero: ");
    scanf("%d",&b);  
  
    int soma = a + b;
  
    return soma;
}


int main(int argc, char const *argv[])
{
    int soma = Soma();
    printf("\n%d\n",soma);

        /* code */
    return 0;
}

