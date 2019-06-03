#include<stdio.h>
#include<math.h>

int main () {

    int a, num, number[30];

    printf("Enter the value of N \n");
    scanf("%d", &num);
    printf("Enter the numbers \n");

    for (int i = 0; i < num; ++i) {
        scanf("%d", &number[i]);
    }
    
    for (int i = 0; i < num; ++i){
        for (int j = i + 1; j < num; ++j){
            if (number[i] > number[j]){
                a =  number[i];
                number[i] = number[j];
                number[j] = a;
            }
        }
    }
    printf("The numbers arranged in ascending order are given below \n");

    for (int i = 0; i < num; ++i) printf("%d\n", number[i]);

    return 0;
}