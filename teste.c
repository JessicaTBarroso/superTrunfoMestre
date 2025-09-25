#include<stdio.h>

    int main (){
        float x;
        unsigned long int y;
        signed long int a = 1000000;  // inteiro grande
        float b = 3.5;   
        int c = 5;             // número com decimal

        float resultado = a + b; 
        float resultado1 = c + b;      // conversão implícita (long int → float)
        

        printf("Resultado = %.2f\n", resultado);
        printf("Resultado1 = %.2f\n", resultado1);
        return 0;
       






    }
