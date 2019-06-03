#include<stdio.h>

int main (void) {

    float num, n100, n50, n20, n10, n5, n2;//Notas
    float m1, m050, m020, m010, m005, m001;//Moedaas
    int l;
    scanf("%f", &num);

    l = num;

    //Notas
    n100 = num / 100;
    l = l % 100;
    n50 = l / 50;
    l = l % 50;
    n20 = l / 20;
    l = l % 20;
    n10 = l / 10;
    l = l % 10;
    n5 = l / 5;
    l = l % 5;
    n2 = l / 2;

    //Moedas
    l = num - ((int)num);
    l = l % 2;
    m1 = l / 1;
    l = l % 1;
    m050 = l / 0.5;

    printf("\n%.0f %.0f %.0f %.0f %.0f %.0f %.0f", n100, n50, n20, n10, n5, n2);
    printf("\n\n%.0f %.0f", m1, m050);

    return 0;
}