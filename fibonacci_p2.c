#include <stdio.h>
#include <locale.h>
int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "");
    int n, t1 = 0, t2 = 1, t3, i;
    do
    {
        printf("Ingrese el número de elementos deseados para la sucesión de Fibonacci: \n");
        scanf("%i", &n);
        if (n <= 0)
        {
            printf("Valor ingresado incorrecto. \n");
        }

    } while (n <= 0);
    printf("FINALMENTE\n");
    printf("Los elementos de Fibonacci son: \n");
    for (i = 1; i <= n; i += 1)
    {
        t3 = t1 + t2;
        printf("%i \n", t1);
        t1 = t2;
        t2 = t3;
    }
    return 0;
}
