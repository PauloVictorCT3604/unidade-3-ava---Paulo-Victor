#include <stdio.h>
#include <stdlib.h>


int fatorial(int n){

            if (n == 0 || n == 1){

            return 1;
            
                } else{

                return n * fatorial(n - 1);
            
                }

}


int fibonacci(int n){

            if (n == 0){

            return 0;

                } else if(n == 1){

                return 1;

                    } else{
                
                    return fibonacci(n - 1) + fibonacci(n - 2);
                    
                    }

}

int mdc(int a, int b){

            if (b == 0){

            return a;
            
                } else{

                return mdc(b, a % b);
            
                }

}

int main(){

    int escolha, numero, a, b, resultado;

        printf("Escolha uma operacao:\n");
        printf("1- Calcular o fatorial de um numero\n");
        printf("2- Calcular o N-esimo termo da sequencia de Fibonacci\n");
        printf("3- Calcular o MDC de dois numeros\n");
        printf("Digite sua escolha: ");
        scanf ("%d", &escolha);

            switch (escolha){

                case 1:

                    printf("Digite um numero: ");
                    scanf("%d", &numero);
                
                resultado = fatorial(numero);
                
                    printf("Fatorial de %d é %d\n", numero, resultado);
                
                break;

                case 2: 
                
                    printf("Digite o valor de N para a sequencia de Fibonacci: ");
                    scanf("%d", &numero);
                
                resultado = fibonacci(numero);
                
                    printf("O %d-esimo termo da sequencia de Fibonacci e %d\n", numero, resultado);
        
                break;

                case 3:

                    printf("Digite dois numeros para calcular o MDC: ");
                    scanf("%d %d", &a, &b);
                
                resultado = mdc(a, b);
            
                    printf("O MDC de %d e %d e %d\n", a, b, resultado);
        
                break;

                default:

                    printf("Escolha invalida!\n");
            
                break;

            }

    return 0;
}
