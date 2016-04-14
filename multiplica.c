#include <stdio.h>
#include <stdlib.h>



int main(){
    float num1, num2, mult;
    
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    
    //Multiplicação
    mult = num1 * num2;
    
    printf("%.2f * %.2f = %.2f", num1, num2, mult);
    
}
