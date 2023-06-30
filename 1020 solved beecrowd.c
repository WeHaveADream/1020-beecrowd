#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade = 0, cont = 0;

    fflush(stdin);
    scanf("%d", &idade);

    while(idade > 364){
        cont ++;
        idade = idade - 365;
    }

    printf("%d ano(s)\n", cont);

    cont = 0;

    while(idade > 29){
        cont++;
        idade = idade - 30;
    }

    printf("%d mes(es)\n", cont);

    printf("%d dia(s)\n", idade);


    return 0;
}
