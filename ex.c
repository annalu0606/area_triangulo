#include <stdio.h>
#include <stdlib.h>

int ler_dado(char texto[]) {

    int t;

    printf("%s", texto);
    scanf("%d", &t);
    return t;
}

int calcula_area(int b, int h) {
    return b * h;
}

int main () {

    int base, altura, area;

    base = ler_dado("Digite a base: ");
    altura = ler_dado("Digite a altura: ");

    area = calcula_area(base, altura);
    printf("Area = %d\n", area);

    return 0;
}













