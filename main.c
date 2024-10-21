#include <stdio.h>

int main() {
    int numero;
    int i;
    int max=0;
    for(i=1;i<=10;i++) {
        printf("numero %d= ",i);
        scanf("%d",&numero);
        if(numero>max) {
            max=numero;
        }
    }
    printf("il numero massimo inserito e' %d",max);
    return 0;
}
